#include <stdio.h>
#include "counter.h"

void counter_run(uint32_t limit)
{
    for (uint32_t i = 0; i < limit; i++)
    {
        printf("Counter: %u\n", i);
    }
}