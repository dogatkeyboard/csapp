#include <stdio.h>
#include "../common/csapp.h"

/**
 * Write a procedure is_little_endian that will return 1 when compiled and run
 * on a little-endian machine, and will return 0 when compiled and run on a
 * big-endian machine. This program should run on any machine, regardless of
 * its word size.
 */

int main() {
    if (is_little_endian()) {
        printf("Little Endian environment found!\n");
    }
    else {
        printf("Big Endian environment found!\n");
    }
    return 0;
}

/**
 * Had trouble finding a big-endian machine to test this on, since my windows
 * and linux systems are little-endian. I would love to setup a big-endian
 * system to make sure this works as I expect it to, but I don't see any
 * practical options for the time being that would allow it.
 */
