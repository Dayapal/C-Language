#include <stdio.h>

int main() {
    int a = 10;

    printf("Initial value of a: %d\n", a); // 10
    printf("Value of a (post-increment): %d\n", a++); // 10 (used first, then increment)
    printf("Value of a after post-increment: %d\n", a); // 11

    return 0;
}
