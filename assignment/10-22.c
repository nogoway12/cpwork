#include <stdio.h>

int main(void) {
    int count[11] = {0};
    int num;

    while (1) {
        if (scanf("%d", &num) != 1) {
            break;
        }
        if (num < 1 || num > 10) {
            break;
        }
        count[num]++;
    }

    for (int i = 1; i <= 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}
