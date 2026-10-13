#pragma warning(disable:4996)
#include <stdio.h>
#include <windows.h>

#define MAX_STUDENTS 50

void bubble_sort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main(void) {
    int count;
    int scores[MAX_STUDENTS];
    int *p = scores;

    SetConsoleOutputCP(65001);

    printf("학생 수를 입력하세요. (최대 50명) : ");
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_STUDENTS) {
        printf("입력 가능한 범위를 벗어났습니다.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("%d번 학생의 최종 성적을 입력하세요. : ", i + 1);
        scanf("%d", p + i);
    }

    bubble_sort(p, count);

    printf("\n정렬된 성적 :");
    for (int i = 0; i < count; i++) {
        printf(" %d", *(p + i));
    }
    printf("\n\n");

    printf("최고 성적 : %d\n", *(p + count - 1));
    printf("최하 성적 : %d\n", *p);

    return 0;
}
