#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

static char index[] = "0123456789ABCDEF"; 
char* itoa(int num, char* str, int radix) {
  unsigned unum;
  int i = 0, j, k;
  if (radix == 10 && num < 0)
  {
    unum = (unsigned)-num;
    str[i++] = '-';
  }
  else unum = (unsigned)num;
  do {
    str[i++] = index[unum % (unsigned)radix];
    unum /= radix;
  } while (unum);
  str[i] = '\0';

  if (str[0] == '-')
    k = 1;
  else
    k = 0;
  for (j = k;j <= (i - 1) / 2;j++) {
    char temp;
    temp = str[j];
    str[j] = str[i - 1 + k - j];
    str[i - 1 + k - j] = temp;
  }
  return str;
}

void *malloc(size_t size) {
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  panic("Not implemented");
#endif
  return NULL;
}

void free(void *ptr) {
}

#endif
