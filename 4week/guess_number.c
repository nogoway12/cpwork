#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int answer;
    int count = 0; // 시도 횟수를 저장할 변수

    // Windows 콘솔에서 한글 출력을 위한 설정
    system("chcp 65001 > nul");

    // 난수 초기화 및 정답 생성 (예: 1부터 100 사이의 숫자)
    srand(time(NULL));
    answer = rand() % 100 + 1; 

    while(1)
    {
        printf("숫자 입력: ");
        scanf("%d", &num);
        
        count++; // 숫자를 입력할 때마다 카운트 1 증가

        if(num > answer){
            printf("더 작은 수입니다.\n");
        }
        else if (num < answer){
            printf("더 큰 수 입니다.\n");
        }
        else{
            printf("정답입니다. \n");
            // 정답을 맞췄을 때 총 시도 횟수 출력
            printf("총 %d번 만에 맞췄습니다!\n", count);
            break;
        }
    }
    
    return 0;
}
