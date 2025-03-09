#include <stdio.h>
int main()
{
    int n, digit = 0, rev = 0;
    printf("enter number");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = (n % 10);
        rev= rev*10+digit;
        n/=10;
        
    }
    printf("%d ", rev);
}