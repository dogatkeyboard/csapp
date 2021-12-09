#include <stdio.h>
#include "csapp.h"


void show_bytes(byte_pointer start, size_t len) {
    int i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_long(long x) {
    show_bytes((byte_pointer) &x, sizeof(long));
}

void show_short(short x) {
    show_bytes((byte_pointer) &x, sizeof(short));
}

void show_double(double x) {
    show_bytes((byte_pointer) &x, sizeof(double));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

int is_little_endian() {
    int val = 0x10;
    byte_pointer bp = (byte_pointer) &val;
    
    // Let's look at the first of sizeof(int) bytes to determine out endianess
    if (bp[0] == 0x10) {
        return 1;
    }
    return 0;
}

/* Get most significant byte from x */
int get_msb(int x) {
    /* Shift by w-8 */
    int shift_val = (sizeof(int)-1) << 3;
    /* Arithmetic shift */
    int xright = x >> shift_val;
    /* Zero all but LSB */
    return xright & 0xFF;
}

/* 2.60 solution */
/* note: unsigned is syntax sugar for unsigned int */
unsigned replace_byte(unsigned x, int i, unsigned char b) {
    byte_pointer bp = (byte_pointer) &x;
    
    // This function is a recipe for disaster because of the i parameter
    // How am I supposed to deal with it potentially being larger than
    // the number of bytes in an unsigned int? 
    if (i < 0 || i > sizeof(unsigned int)) {
        return 0;
    }

    bp[i] = b;
    return x;
}
