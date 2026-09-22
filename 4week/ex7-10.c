#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;

    system("chcp 65001 > nul");


    srand(time(NULL));

    for (i = 0; i < 9; i++) {
        
        printf("시드 값 적용 난수 발생 %d - %d\n", i, rand());
    }

    return 0;
}
