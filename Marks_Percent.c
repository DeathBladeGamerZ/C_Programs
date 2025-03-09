#include <stdio.h>
int main()
{
    int sum, percent, marks, tMarks;
    for (int i = 1; i <= 5; i++)
    {
        printf("enter marks of subject %d: ", i);
        scanf("%d", &marks);
        sum = sum + marks;
    }
    printf("Enter total marks for one Subject: ");
    scanf("%d", &tMarks);
    percent = (sum * 100) / (tMarks * 5);
    printf("\n Sum of marks: %d", sum);
    printf("\n Percentage: %d", percent);
    if (percent <=100 && percent >=90)
    {
        printf("Grade: A");
    }
    else if (percent <90 && percent >=80)
    {
        printf("Grade: B");
    }
     else if (percent <80 && percent >=60)
    {
        printf("Grade: C");
    }
     else if (percent<60)
    {
        printf("Grade: D");
    }
}
