#include <stdio.h>
#define PI 3.14  // macro constant (global)

int main() {
    const int num = 100;

    printf("The value of num is : %d\n", num);
    printf("PI : %0.2f\n", PI);
    printf("Size of PI : %lu bytes\n", sizeof(PI)); 

    return 0;
}
