#include <stdio.h>

int main(void) {
    int total = 0;

    for (int i = 0; i < 4; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int sum = a + b + c;
        total += sum;
        printf("%d\n", sum);
    }
    printf("%d\n", total);

    return 0;
}
