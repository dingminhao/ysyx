#include <proc.h>
#include <elf.h>
#include <stdio.h>
#include <fs.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif


static uintptr_t loader(PCB *pcb, const char *filename) {
  Log("Start read the %s\n", filename);
  //打开文件
  int fd = fs_open(filename, 0, 0);
  assert(fd != -1);
  //得到elf头
  Elf_Ehdr* elf_header = (Elf_Ehdr *)malloc(sizeof(Elf_Ehdr));

  fs_read(fd, elf_header, sizeof(Elf_Ehdr));

  //printf("%d", elf_header.e_phnum);

  assert(*(uint32_t*)elf_header->e_ident == 0x464C457F);

  Elf_Phdr *Phdr = (Elf_Phdr*)malloc(sizeof(Elf_Phdr)* elf_header->e_phnum);
  
  fs_lseek(fd, elf_header->e_phoff, 0); //到达程序头的位置
  
  fs_read(fd, (void *)Phdr, sizeof(Elf_Phdr) * elf_header->e_phnum);

  //遍历找到所有的load
  for(int i = 0; i < elf_header->e_phnum; i ++ ) {
    if(Phdr[i].p_type == PT_LOAD) {

      //Log("p_offset : %p", (uintptr_t)Phdr[i].p_vaddr);

      fs_lseek(fd, Phdr[i].p_offset, 0);
      fs_read(fd, (void*)Phdr[i].p_vaddr, Phdr[i].p_filesz);
      memset((char*)(Phdr[i].p_vaddr + Phdr[i].p_filesz), 0, Phdr[i].p_memsz - Phdr[i].p_filesz + 1);
      printf("%p\n", (void *)Phdr[i].p_vaddr);
    }
  }
  
  free(Phdr);
  free(elf_header);
  return elf_header->e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", (void *)entry);
  ((void(*)())entry) ();
}

