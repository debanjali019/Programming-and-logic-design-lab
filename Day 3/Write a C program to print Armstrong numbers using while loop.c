#include <stdio.h>

int main() {
    int num = 1;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    while (num <= 1000) {
        int temp = num;
        int sum = 0;
        int digit;

        while (temp != 0) {
            digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        if (sum == num) {
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}
