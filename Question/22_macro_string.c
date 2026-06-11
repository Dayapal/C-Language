#include <stdio.h>
#define PI "Pawan"  // macro constant (string literal)

int main() {
    int value;
    const int num = 100;

    // PI = "Something";  Not allowed (macro can't be reassigned)
    // num = 200;  Not allowed (const can't be reassigned)

    printf("The value of num is : %d\n", num);
    printf("PI : %s\n", PI);                   // prints string "Pawan"
    printf("Size of PI : %lu bytes\n", sizeof(PI)); // gives size of string literal
    printf("The size of value : %lu bytes\n", sizeof(value));

    return 0;
}
