#include <stdio.h>

int main() {
    int option;

    do {
        int num;
        printf("Enter number : ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            printf("Even number!\n");
        } else {
            printf("Odd number\n");
        }

        printf("Do you want to test next number? Enter 1 for yes, 0 to exit: ");
        scanf("%d", &option);

    } while (option != 0);

    return 0;
}
