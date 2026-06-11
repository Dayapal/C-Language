#include <stdio.h>

int main()
{
    // Outer loop for rows
    for (int row = 1; row <= 4; row++)
    {
        // Inner loop for columns (prints alphabets)
        for (int col = 1; col <= row; col++)
        {
            printf("%c ", 64 + col); // 65 = 'A', so 64 + col gives 'A', 'B', 'C', ...
        }

        printf("\n");
    }

    return 0;
}
