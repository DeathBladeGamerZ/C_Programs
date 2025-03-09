#include <stdio.h>
int main()
{
    int i, n, sum, even=0, odd=0;
    printf("enter value of n\n");
    scanf(" %d", &n);
    for ( i = 1; i <= n; i++)
    {

        sum = sum + i;
    }
    printf("\n%d", sum);
    for ( i = 2; i <= n; i += 2)
    {
        even = even + i;
    }
    printf("\n%d", even);
    for ( i = 1; i <= n; i += 2)
    {
        odd = odd + i;
    }
    printf("\n%d", odd);
}