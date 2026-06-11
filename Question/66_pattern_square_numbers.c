#include<stdio.h>

int main(){

    // Outer loop for rows
    for(int row = 1; row <= 5; row++){

        // Inner loop for columns
        for(int col = 1; col <= 5; col++){
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}
