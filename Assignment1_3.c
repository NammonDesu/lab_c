#include <stdio.h>

int main() {
    int fac;
    printf("Enter a number to calculate it's factorial : ");
    scanf("%d", &fac);
    
    int result = 1;
    int i = 1;
    for (i; i < (fac+1); i++) {
        result = result * i;
        
    }
    
    printf("Factorial of the num(%d) = %d", fac, result);
    return 0;
}