#include <stdio.h>

int main()
{
    int arr[5]; // Declaration of an integer array of size 5

    // Taking input from the user
    for (int i = 0; i < 5; i++)
    {
        printf("Enter value at index %d : ", i);
        scanf("%d", &arr[i]);
    }

    // Displaying the array values
    printf("\nArray Elements: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
