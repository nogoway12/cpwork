#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int month;
    int days;

    
    system("chcp 65001 > nul");

    printf("월을 입력하세요(1~12): ");
    scanf("%d", &month);

  
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 2:
            days = 28;
            break;
        default:
            printf("잘못된 입력입니다. 1에서 12 사이의 정수를 입력해주세요.\n");
            return 1;
    }

    printf("%d월의 날수는 %d일입니다.\n", month, days);

    return 0;
}
