#include<stdio.h>
void Insertion(int arr[],int size){
    int key , j , temp ,i;
    for(i = 1 ; i<size ; i++){
        key = arr[i];
        j = i-1;
        while(j >=0 && arr[j] >key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
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
    Insertion(arr, alen);
    printf("Sorted array: ");
    for (int i = 0; i < alen; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}