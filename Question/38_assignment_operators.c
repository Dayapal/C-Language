#include <stdio.h>

int main() {

    int x = 10;

    // Assignment operators
    x += 50; // equivalent to x = x + 50

    printf("Value of x after x += 50 : %d\n", x); // 60

    x -= 20; // x = x - 20
    printf("Value of x after x -= 20 : %d\n", x); // 40

    x *= 2; // x = x * 2
    printf("Value of x after x *= 2  : %d\n", x); // 80

    x /= 4; // x = x / 4
    printf("Value of x after x /= 4  : %d\n", x); // 20

    x %= 3; // x = x % 3
    printf("Value of x after x %%= 3 : %d\n", x); // 2

    return 0;
}
