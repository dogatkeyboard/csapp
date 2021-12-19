#include <stdio.h>

/* Return 1 when x contains an odd number of 1s; 0 otherwise.
 * Assume w=32.
 * 
 * Your code should contain a total of at most 12 arithmetic, bitwise, and
 * logical operations.
 */
int odd_ones(unsigned x) {
    x = x ^ (x >> 16);
    x = x ^ (x >> 8);
    x = x ^ (x >> 4);
    x = x ^ (x >> 2);
    x = x ^ (x >> 1);
   
    return x & 1U;
}

int main() {
    // What a whacky problem. Could not have solved this without looking
    // for hints online.
    printf("%x -> %d\n", 0xF0000001, odd_ones(0xF0000001));
    printf("%x -> %d\n", 0xF0000001, odd_ones(0xF000000F));
    return 0;
}
