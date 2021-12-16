#include <stdio.h>

/**
 * Function srl performs a logical right shift using an arithmetic right shift
 * (given by value xsra), followed by other operations not including right
 * shifts or division.
 */
unsigned srl(unsigned x, int k) {
    /* Perform shift arithmetically */
    unsigned xsra = (int) x >> k;

    // Is the most significant bit set to 1?
    if (xsra > (xsra ^ (1U << sizeof(int) * 8 - 1))) {
        for (int i = 1; i <= k; i++) {
            xsra ^= (1U << (sizeof(int) * 8 - 1 - (k - i)));
        }
    }

    return xsra;
}

/**
 * Function sra performs an arithmetic right shift using a logical right shift
 * (given by value xsr1), followed by other operations not including right
 * shifts or division.
 */
int sra(int x, int k) {
    /* Perform shift logically */
    int xsr1 = (unsigned) x >> k;
    // TODO
    // Is the most significant bit set to 1?
    if (x > (x ^ (1U << sizeof(int) * 8 -1))) {
       for (int i = 1; i <= k; i++) {
            xsr1 ^= (1U << (sizeof(int) * 8 - 1 - (k - i)));
       }    
    }
    return xsr1;
}

int main() {
    printf("0x%x -> 0x%x\n", 0xF0000000, srl(0xF0000000, 4));
    printf("0x%x -> 0x%x\n", 0x40000000, srl(0x0F000000, 4));
    printf("0x%x -> 0x%x\n", 0x40000000, sra(0xF0000000, 4));
    printf("0x%x -> 0x%x\n", 0x40000000, sra(0x0F000000, 4));

    return 0;
}
