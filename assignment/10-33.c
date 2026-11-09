#include <stdio.h>
#include <math.h>

int main(void) {
    int score;

    for (int i = 0; i < 5; i++) {
        int sum = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &score);
            sum += score;
        }
        printf("%d %.1f\n", sum, round(((double)sum / 4.0) * 10.0) / 10.0);
    }

    return 0;
}
