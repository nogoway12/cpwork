#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num;
    int answer;
    int count = 0;

    system("chcp 65001 > nul");

    srand(time(NULL));
    answer = rand() % 100 + 1; 

    while(1)
    {
        printf("숫자 입력: ");
        scanf("%d", &num);
        
        count++;

        if(num > answer){
            printf("더 작은 수입니다.\n");
        }
        else if (num < answer){
            printf("더 큰 수 입니다.\n");
        }
        else{
            printf("정답입니다. \n");
            printf("총 %d번 만에 맞췄습니다!\n", count);
            break;
        }
    }
    
    return 0;
}
