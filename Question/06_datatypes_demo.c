#include <stdio.h>

int main() {
    int num = 12;                // Integer -> 4 bytes
    float pi = 3.14;             // Float -> 4 bytes
    double big = 12345.6789;     // Double -> 8 bytes
    char grade = 'A';            // Character -> 1 byte
    char name[] = "Pawan";       // String -> char array

    printf("Integer: %d\n", num);
    printf("Float: %f\n", pi);
    printf("Double: %lf\n", big);
    printf("Character: %c\n", grade);
    printf("String: %s\n", name);

    return 0;
}
