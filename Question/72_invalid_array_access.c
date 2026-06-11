#include <stdio.h>

int main()
{
    int arr[5]; // array size is 5

    // trying to insert 7 values in an array of size 5
    for (int i = 0; i < 7; i++)
    {
        printf("Enter value at index %d : ", i);
        scanf("%d", &arr[i]); // accessing invalid memory for index 5 and 6
    }

    printf("\nArray Elements: ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
