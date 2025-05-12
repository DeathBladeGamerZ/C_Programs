#include <stdio.h>
#include <stdlib.h>// for atoi
int main()
{
    int n;
    char str[100];
    printf("Enter Numer as String");
    scanf("%s",str);
    n = atoi(str);//atoi converts string to number not ascii
    printf("%d",n);
}