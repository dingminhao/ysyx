#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  char* str_p = (char*)s;
  while (*str_p != '\0') {
    str_p++;
  }
  return (str_p - s); 
}

char *strcpy(char *dst, const char *src) {
  char* str_p = (char*)dst;
  while(*src != '\0') {
    *str_p++ = *src++;
  }
  *str_p = '\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char* str_p = (char*)dst;
  int i = 0;
  while(i < n) {
    if(src == NULL) {printf("strncpy is Error！"); assert(0);}
    *str_p++ = *src++;   
  } 
  return dst;
}

char *strcat(char *dst, const char *src) {
  char* str_p = (char*)dst;
  while(*str_p != '\0') str_p++;
  strcpy(str_p, src);
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  int ret = 0;
  char* str1p = (char*)s1;
  char* str2p = (char*)s2;
  while (*str1p != '\0' && *str2p != '\0') {
    ret = *str1p++ - *str2p++;
    if(ret != 0)
      return ret;
  }
  ret = *str1p - *str2p;
  return ret;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  int ret = 0;
  char* str1p = (char*)s1;
  char* str2p = (char*)s2;
  for (int i = 0; i < n;i++) {
    ret = *(str1p++) - *(str2p++);
    if (ret != 0)
      break;
  }
  return ret;
}

void *memset(void *s, int c, size_t n) {
  char* s_p = (char*)s;
  for (size_t i = 0;i < n;i++) {
    *(s_p++) = c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  char* dst_p = (char*)dst;
  char* src_p = (char*)src;
  if (dst <= src) { // 从前往后
    for (size_t i = 0; i < n; i++) {
      *dst_p++ = *src_p++;
    }
  }
  else {// 从后往前
    dst_p += (n - 1);
    src_p += (n - 1);// 移动到最后一个元素上
    for (size_t i = 0; i < n; i++) {
      *dst_p-- = *src_p--;
    }
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  memmove(out, in, n);
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  int ret = 0;
  char* s1_p = (char*)s1;
  char* s2_p = (char*)s2;
  for (int i = 0; i < n;i++) {
    ret = *(s1_p++) - *(s2_p++);// 逐个比较，不相等就退出
    if (ret != 0)
      break;
  }
  return ret;
}

#endif
