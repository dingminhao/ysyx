#include <proc.h>
#include <elf.h>
#include <stdio.h>
#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

static uintptr_t loader(PCB *pcb, const char *filename) {
  //打开文件
  FILE *elf = fopen("/home/dmh/ysyx-workbench/nanos-lite/build/ramdisk.img", "rb");
  assert(elf != NULL);
  //得到elf头
  Elf_Ehdr elf_header;
  int flag = fread(&elf_header, sizeof(elf_header), 1, elf);
  assert(elf_header.e_phnum!=0 && flag != 0);
  assert(*(uint32_t*)elf_header.e_ident == 0x464C457F);

  Elf_Phdr *Phdr = (Elf_Phdr*)malloc(sizeof(Elf_Phdr)* elf_header.e_phnum);
  fseek(elf, elf_header.e_phoff, SEEK_SET); //到达程序头的位置
  fread(Phdr, sizeof(Elf_Phdr),  elf_header.e_phnum, elf);

  //遍历找到所有的load
  for(int i = 0; i < elf_header.e_phnum; i ++ ) {
    if(Phdr[i].p_type == PT_LOAD) {
      fseek(elf, Phdr[i].p_offset, 0);
      fread((void*)Phdr[i].p_vaddr, Phdr[i].p_filesz, 1, elf);
      memset((char*)(Phdr[i].p_vaddr + Phdr[i].p_filesz), 0, Phdr[i].p_memsz - Phdr[i].p_filesz + 1);
    }
  }
  
  free(Phdr);
  return elf_header.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %lx", entry);
  ((void(*)())entry) ();
}

