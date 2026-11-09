#include <stdio.h>

int main(void) {
    int pas[5][5] = {0};

    for (int i = 0; i < 5; i++) {
        pas[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            pas[i][j] = pas[i - 1][j] + pas[i - 1][j - 1];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
