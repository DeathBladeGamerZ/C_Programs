#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t, si, ci;
    printf("Enter Principal : ");
    scanf("%f", &p);
    printf("Enter Rate: ");
    scanf("%f", &r);
    printf("Enter Time in Years: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    
    ci = p * pow((1 + r / 100), t)-p;
    printf("\n S.I. = %f", si);
    printf("\n CI = %f", ci);
    return 0;
}