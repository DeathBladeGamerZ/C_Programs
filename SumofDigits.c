#include <stdio.h>
int main()
{
    int n, digit = 0, sum = 0;
    printf("enter number");
    scanf("%d", &n);
    while (n > 0)
    {
        digit = (n % 10);
        sum += digit;
        n/=10;
    }
    printf("%d ", sum);
}