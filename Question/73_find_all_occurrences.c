#include <stdio.h>

int main() {
    int arr[10] = {12, 34, 56, 78, 90, 36, 45, 22, 66, 45};
    int key = 45;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            printf("%d ", i);
        }
    }
}
