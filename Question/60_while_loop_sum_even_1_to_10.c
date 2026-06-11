#include <stdio.h>

int main() {
    // While Loop: Sum of even numbers from 1 to 10
    int num = 10;
    int sum = 0;

    while (num >= 1) {
        if (num % 2 == 0) {
            sum = sum + num;
        }
        --num; // decrement
    }

    printf("Sum of even numbers between 1 to 10 is : %d\n", sum);

    return 0;
}
