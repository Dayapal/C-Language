#include <stdio.h>

int main() {

    int x = 15;

    // Complex expression with post-decrement and post-increment
    printf("The value of x-- + x++ : %d\n", x-- + x++);

    // Explanation:
    // x-- -> use 15, then x becomes 14
    // x++ -> use 14, then x becomes 15
    // Sum = 15 + 14 = 29

    return 0;
}
