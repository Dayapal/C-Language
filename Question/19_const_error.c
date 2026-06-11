#include <stdio.h>

int main() {
    const int num;   // ERROR: must initialize immediately
    // num = 40;     // not allowed

    printf("The value of num is : %d\n", num);

    return 0;
}
