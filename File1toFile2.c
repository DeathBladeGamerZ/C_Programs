//17.  Write a program to copy contents of one file to another. While doing so replace all lowercase characters to their equivalent uppercase characters.
#include<stdio.h>
#include<ctype.h>
int main(){
FILE *sourceFile = fopen("Story.txt","r");
FILE *destFile = fopen("Blank.txt","a");
char ch;
while((ch = fgetc(sourceFile))!= EOF){
    if(islower(ch) ){
        ch= toupper(ch);
    }
    fputc(ch,destFile);    
}
}