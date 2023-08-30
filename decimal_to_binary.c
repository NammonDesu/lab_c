#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32];  // Assuming 32-bit integers
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary representation: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimalNumber;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0) {
        printf("Binary representation of negative numbers is not supported.\n");
    } else if (decimalNumber == 0) {
        printf("Binary representation: 0\n");
    } else {
        decimalToBinary(decimalNumber);
    }

    return 0;
}
