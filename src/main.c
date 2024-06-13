#include <stdio.h>
#include "lib/functions.h"

int main(int argc, char *argv[]) {
    printf("Number of arguments provided: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    hello("World!");
    return 0;
}

