#include<stdio.h>
int main (){
    int alen, element;
    printf("Enter array Length");
    scanf("%d",&alen);
    int arr[alen];
    for (int i = 0;i<alen;i++){
    printf ("Enter array value");
    scanf("%d",&arr[i]);
    }
    printf("Enter element to search");
    scanf("%d",&element);
    for(int j =0;j<alen;j++){
        if(element==arr[j]){
            printf("element %d found at index %d",element,j);
        }
    }
}