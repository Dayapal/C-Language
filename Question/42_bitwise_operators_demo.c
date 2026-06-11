#include <stdio.h>

int main() {
    int a = 10; // Binary: 1010
    int b = 5;  // Binary: 0101

    // Bitwise AND
    printf("AND (a & b)           : %d\n", a & b); // 0

    // Bitwise OR
    printf("OR (a | b)            : %d\n", a | b); // 15

    // Bitwise XOR
    printf("XOR (a ^ b)           : %d\n", a ^ b); // 15

    // Bitwise NOT
    printf("NOT (~a)              : %d\n", ~a);    // -11

    // Left Shift (multiply by 2^2)
    printf("Left Shift (a << 2)   : %d\n", a << 2); // 40

    // Right Shift (divide by 2^2)
    printf("Right Shift (a >> 2)  : %d\n", a >> 2); // 2

    return 0;
}
