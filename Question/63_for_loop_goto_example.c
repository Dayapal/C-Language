#include <stdio.h>

int main() {

    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);

        if (i == 9) {
            goto abc; // jump to label abc
        }
    }

abc:
    printf("Exit\n");

    goto sdf; // jump to label sdf

sdf:
    printf("Aur bhai\n");

    return 0;
}
