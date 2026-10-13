#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num;
    int *p = &num;
    int res;

    system("chcp 65001 > nul");

    num = 3;
    printf("초기값: %d\n", *p);
    res = (*p)++;
    printf("(*p)++ 반환값: %d, 연산 후 *p: %d\n\n", res, *p);

    num = 3;
    printf("초기값: %d\n", *p);
    res = (*p) + 1;
    printf("(*p)+1 반환값: %d, 연산 후 *p: %d\n\n", res, *p);

    num = 3;
    printf("초기값: %d\n", *p);
    *p += 1;
    printf("*p+=1 연산 후 *p: %d\n\n", *p);

    num = 3;
    printf("초기값: %d\n", *p);
    (*p) += 1;
    printf("(*p)+=1 연산 후 *p: %d\n\n", *p);

    num = 3;
    printf("초기값: %d\n", *p);
    *p = *p + 1;
    printf("*p=*p+1 연산 후 *p: %d\n\n", *p);

    num = 3;
    printf("초기값: %d\n", *p);
    res = ++*p;
    printf("++*p 반환값: %d, 연산 후 *p: %d\n\n", res, *p);

    num = 3;
    printf("초기값: %d\n", *p);
    res = ++(*p);
    printf("++(*p) 반환값: %d, 연산 후 *p: %d\n", res, *p);

    return 0;
}
