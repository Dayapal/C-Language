#include <stdio.h>

int main() {
    int number;

    printf("Enter Number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Negative Number");
    } else {
        printf("Positive Number");
    }

    return 0;
}
