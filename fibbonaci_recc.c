#include <stdio.h>
int Fibbonaci(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return Fibbonaci(n - 1) + Fibbonaci(n - 2);
}
int main()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  Fibbonaci(n);
}