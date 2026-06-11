#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Num1 = ");
    scanf("%d", &num1);

    printf("Num2 = ");
    scanf("%d", &num2);

    printf("Num3 = ");
    scanf("%d", &num3);

    // Ternary operator to find greatest number
    (num1 > num2 && num1 > num3) ? printf("num1 is greatest!") :
    (num2 > num1 && num2 > num3) ? printf("num2 is greatest!") :
    printf("num3 is greatest!");

    return 0;
}
