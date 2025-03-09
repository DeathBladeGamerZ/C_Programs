#include <stdio.h>
int main (){
    float a,b,c;
    printf(" Enter a b c \n");
    scanf(" %f %f %f",&a, &b, &c);
    if(a>b&&a>c){
        printf("%f is Greatest",a);
    }
    else if(b>c){
        printf("%f is Greatest",b);
    }
    else{
        printf("%f is Greatest",c);
    }
}