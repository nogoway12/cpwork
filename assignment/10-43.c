#include <stdio.h>

int main(void) {
    int n;
    int pas[10][10] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        pas[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            pas[i][j] = pas[i - 1][j] + pas[i - 1][j - 1];
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pas[i][j]);
        }
        printf("\n");
    }

    return 0;
}
