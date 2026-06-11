#include <stdio.h>

int main() {
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote!");
    }
    if (age < 18) {
        printf("Sorry, you can only watch cartoons!");
    }

    return 0;
}
