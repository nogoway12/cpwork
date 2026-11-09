#include <stdio.h>

int main(void) {
    int fibo[20];

    fibo[0] = 1;
    fibo[1] = 1;
    for (int i = 2; i < 20; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    for (int i = 0; i < 20; i++) {
        printf("%d ", fibo[i]);
    }

    return 0;
}
