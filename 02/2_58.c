#include <stdio.h>
#include "../common/csapp.h"

int main() {
    if (is_little_endian()) {
        printf("Little Endian environment found!\n");
    }
    else {
        printf("Big Endian environment found!\n");
    }
    return 0;
}
