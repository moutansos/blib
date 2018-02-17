#include <stdio.h>

#include "blib.h"

int assert_eq(int x, int y, char *name);

void testMalloc();

int main() {
    testMalloc();

    return 0;
}

void testMalloc() {
    int original = 200;

    int *ptr;
    MALLOC(ptr, sizeof(int));
    *ptr = original;

    assert_eq(original, *ptr, "MALLOC 1");

    free(ptr);
}