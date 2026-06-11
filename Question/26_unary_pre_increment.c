#include <stdio.h>

int main() {
    int x = 15;

    printf("Value of x (post-increment): %d\n", x++); // 15
    printf("Value of x (pre-increment): %d\n", ++x);  // 17
    printf("Value of x (pre-increment again): %d\n", ++x); // 18

    return 0;
}
