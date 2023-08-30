#include <stdio.h>
#define x 65
int main() {
    printf("%d \t %.2f \t %s \t %c\n", 5, 5.25, "test string", 97);
    printf("%o \t %x", x, x);
    return 0;
}