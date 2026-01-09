#include <stdio.h>
#include <stdint.h>
#include "counter.h"
#include "circular_buffer.h"

int main(void)
{
    //counter_run(5);

    CircularBuffer cb = {0};
    cb_init(&cb);
    
    printf("Pushing 4 numbers\n\n");
    push(&cb,5);
    push(&cb,6);
    push(&cb,9);
    push(&cb,3);

    print_buffer(&cb);

    printf("Popping 2 numbers\n");
    printf("%u\n", pop(&cb));
    printf("%u\n", pop(&cb));
    
    print_buffer(&cb);

    printf("Pushing 4 numbers\n\n");
    push(&cb,5);
    push(&cb,6);
    push(&cb,9);
    push(&cb,3);

    print_buffer(&cb);

    printf("Popping 2 numbers\n");
    printf("%u\n", pop(&cb));
    printf("%u\n", pop(&cb));

    printf("\nPushing 14 numbers");
    for (uint8_t i = 1; i<=14; i++){
        push(&cb,i);
    }

    print_buffer(&cb);

    printf("\nPopping 2 numbers\n");
    printf("%u\n", pop(&cb));
    printf("%u\n", pop(&cb));

    print_buffer(&cb);

    return 0;
}