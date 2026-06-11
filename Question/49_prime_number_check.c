#include <stdio.h>

int main() {
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    int count = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d is a prime number", num);
    } else {
        printf("%d is not a prime number", num);
    }

    return 0;
}
