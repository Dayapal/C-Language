#include <stdio.h>

int main() {
    float price = 1000.5025;

    // %.2f -> prints 2 digits after decimal
    printf("Price value (2 decimal) : %0.2f\n", price);

    // %.3f -> prints 3 digits after decimal
    
    printf("Price value (3 decimal) : %0.3f\n", price);

    return 0;
}
