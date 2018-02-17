#ifndef MEM_H_INCLUDED
#define MEM_H_INCLUDED

#include <stdlib.h>

#define MALLOC(pointer, size) \
if(!((pointer)=malloc(size))) \
{ \
        fprintf(stderr, "Not enough memory");  \
        exit(255); \
}

#endif