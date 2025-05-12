#include <stdio.h>
void Bubble(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
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
    Bubble(arr, alen);
    printf("Sorted array: ");
    for (int i = 0; i < alen; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}