#include <stdio.h>

int main() {
    int num = 0;

    do {
        num++;
        if (num == 5) {
            continue; // skip printing 5
        }
        printf("%d\n", num);

    } while (num < 10);

    return 0;
}
