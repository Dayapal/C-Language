#include <stdio.h>

int main() {
    float h1 = 65.5;
    float h2 = 55;

    printf("h1 > h2  : %d\n", (h1 > h2));   // 1 (true)
    printf("h1 < h2  : %d\n", (h1 < h2));   // 0 (false)
    printf("h1 >= h2 : %d\n", (h1 >= h2));  // 1 (true)
    printf("h1 <= h2 : %d\n", (h1 <= h2));  // 0 (false)
    printf("h1 == h2 : %d\n", (h1 == h2));  // 0 (false)
    printf("h1 != h2 : %d\n", (h1 != h2));  // 1 (true)

    return 0;
}
