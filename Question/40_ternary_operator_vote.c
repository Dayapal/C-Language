#include <stdio.h>

int main() {
    int age;

    printf("Your Age: ");
    scanf("%d", &age);

    // Ternary operator
    (age >= 18) ? printf("You are eligible to vote!") : printf("Sorry, you are not eligible to vote!");

    return 0;
}
