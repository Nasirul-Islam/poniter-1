#include <stdio.h>

int sum(int *a, int *b, int *c)
{
    int sum;
    *a = 10;
    *b = 40;
    *c = 30;
    // printf("%d, %d, %d", *a, *b, *c);
    // sum = *a + *b + *c;
    // printf("\n%d\n", sum);
}
int main()
{
    int x, y, z, res;
    res = sum(&x, &y, &z);
    printf("%d, %d, %d", x, y, z);
    // printf("%d\n", res);
    /*
        int x = 50, y = 20, z = 30, sum;
        int *p, *q, *r;
        p = &x;
        q = &y;
        r = &z;
        sum = *p + *q + *r;
        printf("%d\n", sum);
    */
}