#include <stdio.h>

int main() {
    // Declaration and initialization in the same line
    int num = 10;

    printf("The value of num is : %d\n", num);

    // Reinitialization (allowed)
    num = 100;
    printf("The value of num (after reinitialization) is : %d", num);

    return 0;
}
