#include <stdio.h>
#define PI 3  // macro constant (integer)

int main() {
    const int num = 100;

    printf("The value of num is : %d\n", num);
    printf("PI (as integer): %d\n", PI);
    printf("Size of PI : %lu bytes\n", sizeof(PI)); 

    return 0;
}
