#include <stdio.h>

int main(void) {
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;

    while (1) {
        if (scanf("%d", &month) != 1) {
            break;
        }
        if (month < 1 || month > 12) {
            break;
        }
        printf("%d\n", days[month]);
    }

    return 0;
}
