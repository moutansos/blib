#include <stdio.h>
#include "blib.h"

int assert_eq(int x, int y, char *name) {
    if(x == y) {
        printf("Test %s: Success\n", name);
        return TRUE;
    }

    printf("Test %s: Failed\n", name);
    return FALSE;
}
