#include<stdio.h>

int main(){
    // Outer loop for rows
    for(int row = 1; row <= 4; row++){

        // Inner loop for columns
        for(int col = 1; col <= row; col++){
            printf("%d ", col);
        }

        printf("\n");
    }

    return 0;
}
