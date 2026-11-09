#include <stdio.h>

int main(void) {
    int arr[100];
    int count = 0;

    for (int i = 0; i < 100; i++) {
        int num;
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        arr[count++] = num;
    }

    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
