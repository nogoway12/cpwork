#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
    int num1, num2;

    
    scanf("%d", &num1);
    scanf("%d", &num2);


    int units = num2 % 10;        // 1의 자리 (5)
    int tens = (num2 / 10) % 10;  // 10의 자리 (8)
    int hundreds = num2 / 100;    // 100의 자리 (3)

   
    printf("%d\n", num1 * units);      // (3)
    printf("%d\n", num1 * tens);       // (4)
    printf("%d\n", num1 * hundreds);   // (5)
    printf("%d\n", num1 * num2);       // (6)

    return 0;
}
