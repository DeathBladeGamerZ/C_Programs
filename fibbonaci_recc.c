#include <stdio.h>

int Fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", Fibonacci(i));
    }
    return 0;
}
