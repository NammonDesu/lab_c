#include <stdio.h>

float squareArea(float side){
    return side * side;
}

void main(){
    float side, area;
    printf("Enter side = ");
    scanf("%f", &side);
    area = squareArea(side);
    printf("Square area is %.2f", area);
}