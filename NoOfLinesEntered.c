#include <stdio.h>

int main() {
    char ch;
    int lineCount = 0;

    printf("Enter text (press Ctrl+D to end input on Linux/Mac or Ctrl+C then Enter on Windows):\n");

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }

    printf("\nYou entered %d line(s).\n", lineCount);

    return 0;
}
