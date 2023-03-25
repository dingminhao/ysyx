#include "Ring_buffer.h"



void InitRingBuffer(Ring_buffer* buffer, int buffer_size) {
	buffer -> log = (char**)malloc(buffer_size * sizeof(char*));
    for(int i = 0; i < buffer_size; i++) {
        buffer -> log[i] = (char *)malloc(Ring_char_max * sizeof(char));
    }
    buffer -> index = 0;
    buffer -> buffer_size = buffer_size;
}

void FreeRingBuffer(Ring_buffer* buffer) {
    for(int i = 0; i < buffer -> index; i++) {
        free(buffer -> log[i]);
    }
    free(buffer -> log);
}

void WriteRingBuffer(Ring_buffer* buffer, char *log) {
    strcpy(buffer -> log[buffer -> index], log);    
}

void PrintfRingBuffer(Ring_buffer* buffer) {
    for(int i = 0; i < buffer->buffer_size; i++) {
        if( (i+1) % buffer -> buffer_size == buffer -> index ) printf("-->%s\n", buffer -> log[i]);
        else printf("   %s\n", buffer -> log[i]);
    }
}