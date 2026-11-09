#include <stdio.h>

int main(void) {
    double score[7] = {0.0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0};
    int c1, c2;

    scanf("%d %d", &c1, &c2);
    printf("%.1f\n", score[c1] + score[c2]);

    return 0;
}
