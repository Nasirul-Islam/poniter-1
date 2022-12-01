#include <stdio.h>
#include <math.h>

int main()
{
    char str[50];
    scanf("%s", str);
    int i = 0, cost = 0;
    while (str[i] != '\0')
    {
        cost += str[i] - 96;
        i++;
    }
    for (i = 0; i < 6; i++)
    {
        if (pow(2, i) == cost)
        {
            printf("YES\n");
            printf("cost = 2^%d", i);
            return 0;
        }
    }
    printf("NO\n");
}