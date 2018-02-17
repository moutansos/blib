#include <stdio.h>
#include "blib.h"

int assert_eq(int x, int y, char *name) {
    if(x == y) {
        printf("Test %s: Success", name);
        return TRUE;
    }

    printf("Test %s: Failed", name);
    return FALSE;
}