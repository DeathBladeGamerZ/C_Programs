#include <stdio.h>
#include <string.h>
void reverseString(char str[]) {
    int len = strlen(str);
    char temp[len + 1];
    int i;
    for (i = 0; i < len; i++) {
        temp[i] = str[len - i - 1];
    }
    temp[i] = '\0';
    strcpy(str, temp);
}

int main() {
    int n;
    printf("Enter length of String: ");
    scanf("%d",&n);
    char str[n];
    printf("Enter String: ");
    scanf("%s",&str);
    reverseString(str);
    printf("Reversed String: %s\n", str);
    return 0;
}
