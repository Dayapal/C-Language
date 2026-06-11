#include <stdio.h>

int main() {
    // While Loop: Sum numbers from 1 to 10
    int num = 10;
    int sum = 0;

    while (num >= 1) {
        sum = sum + num;
        --num; // decrement
    }

    printf("Sum of 1 to 10 is : %d\n", sum);

    return 0;
}
