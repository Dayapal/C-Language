#include <stdio.h>

int main() {
    int arr[] = {12, 34, 56, 78, 90, 36, 45, 22, 66, 45};

    printf("Size of array : ");

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("arr size : %d\n", size);

    float sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    printf("Average : %f\n", sum / size);
}


// Concept Notes:

// int / int = int → Result is integer

// float / int = float → Result is float

// float / float = float → Result is float