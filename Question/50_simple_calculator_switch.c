#include <stdio.h>

int main() {
    int first_num; 
    printf("Enter First Number: ");
    scanf("%d", &first_num);

    char ch;
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &ch);

    int second_num; 
    printf("Enter Second Number: ");
    scanf("%d", &second_num);

    switch(ch) {
        case '+':
            printf("Add: %d", first_num + second_num);
            break;
        case '-':
            printf("Sub: %d", first_num - second_num);
            break;
        case '*':
            printf("Mul: %d", first_num * second_num);
            break;
        case '/':
            if (second_num != 0) {
                printf("Div: %d", first_num / second_num);
            } else {
                printf("Error: Division by zero!");
            }
            break;
        case '%':
            if (second_num != 0) {
                printf("Rem: %d", first_num % second_num);
            } else {
                printf("Error: Division by zero!");
            }
            break;
        default:
            printf("Invalid Input!");
    }

    return 0;
}
