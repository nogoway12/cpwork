#include <stdio.h>

int main(void) {
    int count = 0;
    int sum = 0;

    for (int i = 0; i < 100; i++) {
        int num;
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num % 5 == 0) {
            count++;
            sum += num;
        }
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", count > 0 ? (double)sum / count : 0.0);

    return 0;
}
