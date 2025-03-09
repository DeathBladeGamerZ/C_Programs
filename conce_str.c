#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%99s", str1);
    printf("Enter second string: ");
    scanf("%99s", str2);
    int len = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i <= len2; i++)
    {
        str1[len + i] = str2[i];
    }
    printf("%s", str1);
    return 0;
}