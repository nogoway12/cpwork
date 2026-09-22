#include <stdio.h>

void print_recursive(int n) {
    if (n == 0) {
        return;
    }
    print_recursive(n - 1);
    printf("%d\n", n);
}

int main() {
    int n;
    scanf("%d", &n);
    print_recursive(n);
    return 0;
}
