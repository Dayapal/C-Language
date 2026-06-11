#include <stdio.h>

int main() {
    int age;

    printf("Enter Age: ");
    scanf("%d", &age);

    if (age >= 18) {
        // Age >= 18 block
        if (age >= 50) {
            printf("Watch Ramayan!");
        } else {
            printf("Watch what you want!");
        }
    } else {
        // Age < 18 block
        printf("Watch cartoon!");
    }

    return 0;
}
