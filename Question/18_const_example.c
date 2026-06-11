#include <stdio.h>

int main() {
    const int num = 10;   // must initialize at declaration
    // num = 40; Not allowed (compiler error)

    printf("The value of num is : %d\n", num);

    return 0;
}
