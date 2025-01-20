#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Initial: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("Final: a = %d, b = %d\n", a, b);

    return 0;
}
