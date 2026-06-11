#include <stdio.h>

int main() {
    int arr[] = {12, 34, 56, 78, 90, 36, 45, 22, 66, 45};
    int key = 45;

    printf("Size of array : ");

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("arr size : %d\n", size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
