#include <stdio.h>
#include <stdint.h>
#include "mymodule.h"

#define MAX_COUNTER 10

static uint64_t warns_history[MAX_COUNTER];
static int warn_index = 0;
static uint64_t errors_history[MAX_COUNTER];
static int error_index = 0;

uint64_t warn(){
    uint64_t pc;
    __asm__ volatile("call 1f\n1:\npop %0" : "=r" (pc));
    warns_history[warn_index++%10] = pc;
    return pc;
}

uint64_t error(){
    uint64_t pc;
    __asm__ volatile("call 1f\n1:\npop %0" : "=r" (pc));
    errors_history[error_index++%10] = pc;
    return pc;
}
