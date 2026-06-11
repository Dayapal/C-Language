#include <stdio.h>

int main() {
    int x = 15;

    printf("Value of x (post-decrement): %d\n", x--); // 15 (used first, then decrement)
    printf("Value of x after post-decrement: %d\n", x); // 14

    return 0;
}
