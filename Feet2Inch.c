#include <stdio.h>
int Feet2Inch(int);
int feet, inches;
void main() {
    feet = 6;
    inches = Feet2Inch(feet);
    printf("Height in inches is %d\n", inches);
    printf("Welcome\t");
    printf("to the moon");
}
int Feet2Inch(int f) { /* สวัสดีฮ๊าฟฟู่วว */
    return f*12; //สวัสดีฮ๊าฟฟู่ววว
}