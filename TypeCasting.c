#include <stdio.h>

int main() {
    // 1. int to float
    int a = 5, b = 2;
    float result = (float)a / b;
    printf("1. int to float: (float)%d / %d = %.2f\n", a, b, result);

    // 2. float to int
    float pi = 3.14159;
    int pi_truncated = (int)pi;
    printf("2. float to int: (int)%.5f = %d\n", pi, pi_truncated);

    // 3. char to int (ASCII)
    char ch = 'A';
    int ascii_val = (int)ch;
    printf("3. char to int: (int)'%c' = %d\n", ch, ascii_val);

    // 4. int to char
    int num = 66;
    char char_val = (char)num;
    printf("4. int to char: (char)%d = '%c'\n", num, char_val);

    return 0;
}
//OutPut:
// 1. int to float: (float)5 / 2 = 2.50
// 2. float to int: (int)3.14159 = 3
// 3. char to int: (int)'A' = 65
// 4. int to char: (char)66 = 'B'
