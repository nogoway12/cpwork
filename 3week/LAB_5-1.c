#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int year; //연도를 저장할수있는 변수선언하는것(중요)
    
    // 한국어가 계속 깨져서 제가 설정한겁니다.(문제있으면 삭제하겠습니다.)
    system("chcp 65001 > nul");

    printf("연도를 입력하세요 : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("윤년입니다\n");
    }
    else {
        printf("평년입니다\n");
    }

    return 0;
}

