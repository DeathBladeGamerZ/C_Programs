#include<stdio.h>
int main (){
    FILE *file = fopen("Story.txt","r");
    char ch;
    int linecount = 0;
    while ((ch=fgetc(file))!= EOF)
    {
        if (ch == '\n'){
             linecount ++;
            }
    }
    printf("Total No Lines: %d",linecount);
    
}