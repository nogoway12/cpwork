#include <stdio.h>

int main(void) {
    int num;
    int *p = &num;

    num = 3;
    printf("%d\n", (*p)++);

    num = 3;
    printf("%d\n", (*p) + 1);

    num = 3;
    *p += 1;
    printf("%d\n", *p);

    num = 3;
    (*p) += 1;
    printf("%d\n", *p);

    num = 3;
    *p = *p + 1;
    printf("%d\n", *p);

    num = 3;
    printf("%d\n", ++*p);

    num = 3;
    printf("%d\n", ++(*p));

    return 0;
}
