#include <stdio.h>
int main()
{
    int alen, min = 0, max = 0;
    printf("Enter array Length");
    scanf("%d", &alen);
    int arr[alen];
    for (int i = 0; i < alen; i++)
    {
        printf("Enter array value");
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    max = arr[0];
    for (int j = 1; j < alen; j++)
    {
        if(min>arr[j]){
            min = arr[j];
        }
    }
     for (int j = 1; j < alen; j++)
    {
        if(max<arr[j]){
            max = arr[j];
        }
    }
    printf("Minimun: %d",min);
    printf("Maximun: %d",max);
}