#include <stdio.h>
int sorting(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int largest(int arr[], int n, int k)
{
    int i, j;
    for (i = n - 1, j = 1; i >= 0; i--, j++)
    {
        if (j == k)
            return arr[i];
    }
}
int smallest(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (i == k - 1)
            return arr[i];
    }
}
int main()
{
    int i, n, k, ler, sml;
    scanf("%d", &n);
    int arr[n], counterarr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    sorting(arr, n);
    // 2 17 1 1 3 2 5 19 5
    // 1 1 2 2 3 5 5 17 19
    ler = largest(arr, n, k);
    sml = smallest(arr, n, k);

    printf("%dth largest element = %d\n", k, ler);
    printf("%dth smallest element = %d\n", k, sml);
}