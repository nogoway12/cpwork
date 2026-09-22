#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    // Windows 콘솔에서 한글 출력을 위한 설정
    system("chcp 65001 > nul");

    // 현재 시간을 시드 값으로 설정하여 난수 발생기를 초기화
    srand(time(NULL));

    // 0부터 8까지 총 9개의 난수 생성 및 출력
    for (i = 0; i < 9; i++) {
        // 0부터 RAND_MAX 사이의 난수를 생성 및 반환
        printf("시드 값 적용 난수 발생 %d - %d\n", i, rand());
    }

    return 0;
}
