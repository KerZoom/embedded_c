#ifndef CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_H
#define CIRCULAR_BUFFER_SIZE 16
#include <stdint.h>

typedef struct {
    uint8_t head;
    uint8_t tail;
    uint8_t count;
    uint8_t buffer[CIRCULAR_BUFFER_SIZE];
    uint8_t return_value;
} CircularBuffer;

void cb_init(CircularBuffer *cb);

void push(CircularBuffer *cb, uint8_t value);

uint8_t pop(CircularBuffer *cb);

void print_buffer(CircularBuffer *cb);

#endif