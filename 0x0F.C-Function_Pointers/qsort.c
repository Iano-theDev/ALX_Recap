#include <stdio.h>
#include <stdlib.h>

int compare (const void *a, const void *b)
{
    return ( *(int*)a -*(int*)b);
}

int main ()
{
    int arr[] = {9, 6, 45, 12, 34, 56, 67};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    qsort (arr, n, sizeof(int), compare);

    for (i=0; i<n; i++)
        printf("%d, ",arr[i]);
    return (0);
}

