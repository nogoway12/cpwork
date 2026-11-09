#include <stdio.h>

int main(void) {
    int score[4][4] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &score[i][j]);
            score[i][3] += score[i][j];
            score[3][j] += score[i][j];
            score[3][3] += score[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", score[i][j]);
        }
        printf("\n");
    }

    return 0;
}
