#include <stdio.h>

int main() {
    int base, exp;
    printf("Enter the base : ");
    scanf("%d", &base);
    printf("Enter the exponent : ");
    scanf("%d", &exp);

    int i = 0;
    int result = 1;
    for (i; i < exp; i++) {
        result = result * base;
    }

    printf("The power of no = %d", result);
    return 0;
}