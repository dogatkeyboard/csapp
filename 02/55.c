/**
 * Compile and run the sample code that uses show_bytes (file show-bytes.c) on
 * different machines to which you have access. Determine the byte orderings
 * used by these machines.
 */
#include <stdio.h>
#include "../common/csapp.h"

int main() {
    printf("***integer value: 100***\n");
    show_int((int) 100);

    printf("***fload value: 54.23***\n");
    show_float((float) 54.23);

    printf("***pointer value: 4000***\n");
    show_pointer((void *) 4000);

    return 0;
}

/**
 * I was only able to run this code on a (1) linux-x86-64 and a (2) windows 10
 * box. It turns out, just as the book outlines in their example runs, that
 * both systems use LITTLE ENDIAN byte ordering.
 * 
 */
