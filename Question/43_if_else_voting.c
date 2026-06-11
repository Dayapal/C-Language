#include <stdio.h>

int main() {
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote!");
    } else {
        printf("Invalid input!");
    }

    return 0;
}
