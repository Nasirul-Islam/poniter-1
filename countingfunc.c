#include <stdio.h>
int counter(int arr[], int n, int k)
{
    int i, count = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < k || arr[i] > k)
            count++;
    }
    return count;
}
int main()
{
    int i = 0, n, k;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    printf("%d\n", counter(arr, n, k));
}