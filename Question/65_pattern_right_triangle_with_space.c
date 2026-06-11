#include<stdio.h>

int main(){
    // Outer loop for rows
    for(int row = 1; row <= 4; row++){

        // Print leading spaces
        for(int space = 1; space <= 4 - row; space++){
            printf(" ");
        }

        // Print numbers
        for(int col = 1; col <= row; col++){
            printf("%d", col);
        }

        printf("\n");
    }

    return 0;
}
