#include<stdio.h>
int main (){
    FILE *writefile= fopen("Blank.txt","w+");
   char str[] ="HELLO FILE";
    fputs(str,writefile);
    fclose(writefile);

    FILE *readfile= fopen("Blank.txt","r");
   char str2[20] ;
    fgets(str2,20,readfile);
    printf("%s",str2);

}
