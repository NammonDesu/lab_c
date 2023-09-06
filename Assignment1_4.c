#include <stdio.h>

int main() {
    int choice, val1, val2, result;
    printf("Choose your option\n1.Addtion\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the first Integer\n");
        scanf("%d", &val1);
        printf("Enter the Second Integer\n");
        scanf("%d", &val2);
        result = val1 + val2;
        printf("The Addition of %d and %d is: %d", val1, val2, result);
    }
    else if (choice == 2) {
        printf("Enter the first Integer\n");
        scanf("%d", &val1);
        printf("Enter the Second Integer\n");
        scanf("%d", &val2);
        result = val1 - val2;
        printf("The Subtraction of %d and %d is: %d", val1, val2, result);
    }
    else if (choice == 3) {
        printf("Enter the first Integer\n");
        scanf("%d", &val1);
        printf("Enter the Second Integer\n");
        scanf("%d", &val2);
        result = val1 * val2;
        printf("The Multiplication of %d and %d is: %d", val1, val2, result);
    }
    else if (choice == 4) {
        printf("Enter the first Integer\n");
        scanf("%d", &val1);
        printf("Enter the Second Integer\n");
        scanf("%d", &val2);
        result = val1 / val2;
        printf("The Division of %d and %d is: %d", val1, val2, result);
    }

    return 0;
}