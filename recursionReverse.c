#include <stdio.h>

int revers(n)
{
    printf("%d ", n);
    if (n == 1)
        return 1;
    else
        return revers(n - 1) + n;
}
int main()
{
    int n, x;
    scanf("%d", &n);
    x = revers(n);
    printf("\n%d\n", x);
}