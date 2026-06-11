#include <stdio.h>

int main()
{
    int arr[5]; // Array declaration of size 5

    // Array initialization
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Printing array elements
    printf("arr[0] : %d\n", arr[0]);
    printf("arr[1] : %d\n", arr[1]);
    printf("arr[2] : %d\n", arr[2]);
    printf("arr[3] : %d\n", arr[3]);
    printf("arr[4] : %d\n", arr[4]);

    // arr[5] = 60;  // ❌ Wrong: Out of range
    // printf("arr[5] : %d\n", arr[5]); // ❌ Causes undefined b
