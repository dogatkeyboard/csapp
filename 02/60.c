#include <stdio.h>
#include "../common/csapp.h"

int main() {
    unsigned x = 0x12345678;
    int i = 2;
    unsigned char b = 0xAB;

    printf("replace_byte(0x%.2x, %d, 0x%.2x) --> 0x%.2x\n", x, i, b, replace_byte(x, i, b));
    return 0;
}
