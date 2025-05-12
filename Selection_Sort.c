#include<stdio.h>
void Selection_Sort(int arr[],int size){
    int temp;
    for (int i = 0 ;i<size;i++){
        int min = i;
        for (int j = i+1;j<size;j++){
            if (arr[j]< arr[min]){
                temp = arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main()
{
    int alen;
    printf("Enter array Length");
    scanf("%d",&alen);
    int arr[alen];
    for (int i = 0;i<alen;i++){
    printf ("Enter array value");
    scanf("%d",&arr[i]);}
    Selection_Sort(arr, alen);
    printf("Sorted array: ");
    for (int i = 0; i < alen; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}