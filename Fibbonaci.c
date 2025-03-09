#include<stdio.h>
int main(){
    int i, n, t1=0,t2=1, nexterm;
    printf("Enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d, ",t1);
        nexterm= t1+t2;
        t1 =t2;
        t2= nexterm;        
    }
}