#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);

    int *A = (int*)calloc(n, sizeof(int)); //dynamically allocated array

    int i;
    for(i =0; i < n; i++)
    {
        A[i] = i+1;
    }
    int *B = (int*)realloc(A,0);
    printf("Previous block address = %d,\nNew address = %d.\n", A,B);
    for(i =0;i<2*n;i++)
    {
        printf("%d\n", B[i]);
    }
}
