#include <stdio.h>

int main() {
    int x = 15;

    printf("Value of x (post-decrement): %d\n", x--); // 15
    printf("Value of x (pre-decrement): %d\n", --x);  // 13
    printf("Value of x (pre-decrement again): %d\n", --x); // 12

    return 0;
}
