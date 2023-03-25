#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define Ring_buffer_size 32
#define Ring_char_max 1024
typedef struct Ring_buffer {
    char **log;
    int index;
    int buffer_size;
}Ring_buffer;

void InitRingBuffer(Ring_buffer* buffer, int buffer_size);
void FreeRingBuffer(Ring_buffer* buffer);
void WriteRingBuffer(Ring_buffer* buffer, char *log);
void PrintfRingBuffer(Ring_buffer* buffer);
