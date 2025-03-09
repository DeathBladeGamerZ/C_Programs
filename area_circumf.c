#include <stdio.h>
int main()
{
    float r, area, circum, pi = 3.14;
    printf("enter radius of circle: ");
    scanf("%f", &r);
    area = pi * r * r;
    circum = 2 * pi * r;
    printf("\nArea = %f", area);
    printf("\nCircumference = %f ", circum);
}