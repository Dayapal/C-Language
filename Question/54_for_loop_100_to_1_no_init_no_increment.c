#include <stdio.h>

int main() {
    // For Loop: Initialization outside and decrement inside the loop
    int i = 100;
    for (; i >= 1;) {
        printf("%d\n", i);
        i--; // decrement inside the loop
    }
    return 0;
}
