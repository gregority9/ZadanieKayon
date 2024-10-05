#ifndef MYMODULE_H
#define MYMODULE_H

#include <stdint.h>

uint64_t warn();
uint64_t error();

#define WARN() warn()
#define ERROR() error()

#endif