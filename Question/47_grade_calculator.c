#include <stdio.h>

int main() {
    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks <= 100 && marks >= 90) {
        printf("Grade A");
    }
    else if (marks < 90 && marks >= 80) {
        printf("Grade B");
    }
    else if (marks < 80 && marks >= 70) {
        printf("Grade C");
    }
    else {
        printf("Sorry, You have failed!");
    }

    return 0;
}
