#include <stdio.h>

int main() {
    double price = 1000.5025;

    // %.2lf -> prints 2 digits after decimal
    printf("Price value (2 decimal) : %0.2lf\n", price);

    // %.3lf -> prints 3 digits after decimal
    printf("Price value (3 decimal) : %0.3lf\n", price);

    return 0;
}
