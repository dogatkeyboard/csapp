#include <stdio.h>
#include "../common/csapp.h"
/**
 * Write a C expression that will yield a word consisting of the least
 * significant byte of x and the remaining bytes of y. For operands
 * x = 0x89ABCDEF and y = 0x76543210, this would give 0x765432EF.
 */

int solve(int x, int y) {
    // The mask 0xFF indicates the low-order byte of a word.
    int lsbmask = 0xFF;

    int lsbx = x & lsbmask;
    int remaindery = y & ~lsbmask;
    return (remaindery | lsbx);
}

int main() {
    int x = 0x89ABCDEF, y = 0x76543210;
    
    printf("x = %.2x,  y = %.2x\n", x, y);

    printf("after operation = %.2x\n", solve(x,y));
    return 0;
}
