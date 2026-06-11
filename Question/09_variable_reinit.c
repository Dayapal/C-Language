#include <stdio.h>

int main() {
    int num;    // variable declaration

    num = 10;   // initialization
    printf("The value of num is : %d\n", num);

    // Reinitialization is allowed (we can assign new value)
    num = 100;
    printf("The value of num (after reinitialization) is : %d", num);

    return 0;
}
