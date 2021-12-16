#include <stdio.h>
#include "../common/csapp.h"

int int_shifts_are_arithmetic() {
    // 10000000 00000000 00000000 00000000
    int x = 0x80000000;

    // ???????? 10000000 00000000 00000000
    int shifted_x = x >> 8;

    int msb = get_msb(shifted_x);

    // This tells us if the ? values above are 1 or 0
    // aka arithmetic shift or logical shift
    if (msb == 0xFF) {
        return 1;
    }

    return 0;
}

int main() {

    printf("arithmetic right shift: %d\n", int_shifts_are_arithmetic());

    return 0;
}
