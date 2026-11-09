#include <stdio.h>

int main(void) {
    int count[10] = {0};
    int num;

    while (1) {
        if (scanf("%d", &num) != 1 || num == 0) {
            break;
        }
        count[num / 10]++;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}
