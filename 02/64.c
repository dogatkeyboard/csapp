#include <stdio.h>

/* Return 1 when any odd bit of x equals 1; 0 otherwise.
   Assume w=32. */

int any_odd_one(unsigned x) { 
   int result = x & 1U;
   result |= (x >> 2) & 1U;
   result |= (x >> 4) & 1U;
   result |= (x >> 6) & 1U;
   result |= (x >> 8) & 1U;
   result |= (x >> 10) & 1U;
   result |= (x >> 12) & 1U;
   result |= (x >> 14) & 1U;
   result |= (x >> 16) & 1U;
   result |= (x >> 18) & 1U;
   result |= (x >> 20) & 1U;
   result |= (x >> 22) & 1U;
   result |= (x >> 24) & 1U;
   result |= (x >> 26) & 1U;
   result |= (x >> 28) & 1U;
   result |= (x >> 30) & 1U;

   // 10000000 00000000 00000000 00000000
   // 00000000 00000000 00000000 00000010
   return result;
}

int main() {
    printf("%u -> %d\n", 0x40000000, any_odd_one(0x40000000));
    printf("%u -> %d\n", 0x80000000, any_odd_one(0x80000000));
    printf("%u -> %d\n", 0x00000004, any_odd_one(0x00000004));
    return 0;
}
