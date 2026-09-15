#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;

    
    system("chcp 65001 > nul");


    printf("정수를 입력하세요 : ");
    scanf("%d", &num);

    
    printf("%s\n", (num % 2 == 0) ? "even" : "odd");

    return 0;
}
