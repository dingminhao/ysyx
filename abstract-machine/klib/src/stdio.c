#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static char printf_buf[2048];
void puts(char *str) {
  while(*str != '\0') {
    putch(*str++);
  }
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  char* buf_p = out;
  static char str_temp[64];
  while (*fmt != '\0') {
    if (*fmt != '%') {
      *buf_p++ = *fmt++; 
    }
    else {
      switch (*(++fmt)) {
      case 'c':
        char ch = va_arg(ap, int);
        *buf_p++ = ch;
        break;
      case 's':
        char* str = va_arg(ap, char*);
        size_t len_s = strlen(str);
        strcpy(buf_p, str);
        buf_p += len_s;
        break;
      case 'd':
        int num_d = va_arg(ap, int);
        char* num_d2str = itoa(num_d, (char*)&str_temp, 10);
        strcpy(buf_p, num_d2str);
        size_t len_d = strlen(num_d2str);
        buf_p += len_d;
        break;
      case 'p':
        int num_p = va_arg(ap, int);
        char* num_p2str = itoa(num_p, (char*)&str_temp, 16);
        strcpy(buf_p, num_p2str);
        size_t len_p = strlen(num_p2str);
        buf_p += len_p;
        break;
      default:
        break;
      }
      fmt++;
    }
  }
  *buf_p++ = '\0';
  return buf_p - out;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  int i;

  va_start(args, fmt);
  i = vsprintf(out, fmt, args);
  va_end(args);
  return i;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

int printf(const char *fmt, ...) {
  va_list args;
  int ret;
  va_start(args, fmt);
  ret = vsprintf(printf_buf, fmt, args);
  va_end(args);

  puts(printf_buf);
  return ret;
}
#endif
