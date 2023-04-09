#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;  
  size_t size;
  size_t disk_offset;
  ReadFn read;  //函数指针
  WriteFn write;  //函数指针
  size_t open_offset;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB, };

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};



int open(const char *pathname, int flags, int mode) {
  for(size_t i = 0; i < LENGTH(file_table); i++) {
    if(!strcmp(pathname, file_table[i].name)) {
      file_table[i].open_offset = 0;
      return i;
    }
  }
  Log("找不到该文件:%s", pathname);
  assert(0);
  return -1;
}

size_t read(int fd, void *buf, size_t len) {
  int disk_offset = file_table[i].disk_offset;
  int file_size = file_table[i].size;
  int open_offset = file_table[i].open_offset;
  int read_len = len;
  if((open_offset + len > size)) {
    read_len = file_size  - open_offset + 1;
  }
  ramdisk_read(buf, disk_offset + open_offset, read_len);
  file_table[fd].open_offset += read_len;
  return read_len; 
}
size_t write(int fd, const void *buf, size_t len) {
  int disk_offset = file_table[i].disk_offset;
  int file_size = file_table[i].size;
  int open_offset = file_table[i].open_offset;
  // 控制文件大小
  assert((open_offset + len) <= file_size);
  file_table[fd].open_offset += len;
  return ramdisk_write(buf, disk_offset + open_offset, len);
}
int close(int fd) {
  return 0;
}

size_t fs_lseek(int fd, size_t offset, int whence) {
  switch (whence)
  {
  case SEEK_SET:
    file_table[fd].open_offset = offset;
    break;
  case SEEK_CUR:
    file_table[fd].open_offset += offset;
    break;
  case SEEK_END:
    file_table[fd].open_offset = offset + file_table[fd].size;
    break;
  default:
    assert(0);
    break;
  }
  return file_table[fd].open_offset;
}


void init_fs() {
  // TODO: initialize the size of /dev/fb
}
