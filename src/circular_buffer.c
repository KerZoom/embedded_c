#include <stdio.h>
#include <stdint.h>
#include "circular_buffer.h"

void cb_init(CircularBuffer *cb){
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
    cb->return_value = 0;
}

void push(CircularBuffer *cb, uint8_t value){
    cb->buffer[cb->head] = value;
    if (cb->head == CIRCULAR_BUFFER_SIZE-1){
        cb->head = 0;
    }
    else {
        cb->head++;
    }
    cb->count++;
}

uint8_t pop(CircularBuffer *cb){
    if (cb->count > 0){
        cb->return_value = cb->buffer[cb->tail];
        cb->count--;
        if (cb->tail == CIRCULAR_BUFFER_SIZE-1){
            cb->tail = 0;
        }
        else {
            cb->tail++;
        }
        return cb->return_value;
    }
    return 0;
}

void print_buffer(CircularBuffer *cb){
    printf("\n");
    for (uint8_t i = 0; i < CIRCULAR_BUFFER_SIZE; i++){
        printf("%u,", cb->buffer[i]);
    }
    printf("\n");
}
