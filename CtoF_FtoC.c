#include <stdio.h>
int main()
{
    float option, c, f;
    printf("Select Conversion 1 or 2");
    printf("\n 1) Centigrade to Farehienheight");
    printf("\n 2) Farenheight to Centigrade");
    scanf("\n %f", &option);
    if (option == 1)
    {
        printf("\n enter centigrade");
        scanf(" %f", &c);
        f = (c * 1.8) + 32;
        printf("\n %f centigrade equals to %f farenheight", c, f);
    }
    else if (option == 2)
    {
        printf("\n enter ferenheight");
        scanf("%f", &f);
        f = (5 / 9) * (c - 32);
        printf("\n %f farenheight equals to %f centigrade", f, c);
    }
    else
    {
        printf("\n Invalid Input");
    }
}