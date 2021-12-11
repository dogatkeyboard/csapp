#include <stdio.h>
#include <limits.h>

/* Return 1 if an int has any bits set to 1, and a 0 otherwise. */
int a(int x) {
    // logical AND operation
    return x && 1;
}

/* Return 1 if an int has any bits set to 0, and 1 otherwise. */
int b(int x) {
    return ~x && 1;
}

/* Return 1 if any bit in the least significant byte is 1, otherwise 0. */
int c(int x) {
    return (x & 0xFF) && 1;
}

/* Return 1 if any bit in the most significant byte is 0, otherwise 0. */
int d(int x) {
    return ~(x >> 24) && 1;
}

int main() {
    printf("a(0x00): %d, a(0xF00F): %d\n", a(0x00), a(0xF00F));
    printf("b(0xFFFFFFFF): %d, b(0xF00F): %d\n", b(0xFFFFFFFF), b(0xF00F));
    printf("c(0x00): %d, c(0x10): %d\n", c(0x00), c(0x10));
    // 4278190080 = 0xFF000000
    printf("d(0xFF): %d, d(4278190080): %d\n", d(0xFF), d(4278190080));
    return 0;
}
