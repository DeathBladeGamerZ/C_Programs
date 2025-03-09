#include <stdio.h>
int main()
{
    int n,i, flag = 0;
    printf("Enter Number");
    scanf("%d", &n);
    for ( i = 2; i <= n; i++){
        if (n % i == 0) {
            flag=flag+ 1;
        }
    }
    if (flag == 1){
        printf("Prime no");
    }
    else{
        printf("Not Prime no");
    }
}
