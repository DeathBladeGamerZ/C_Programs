#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int i, j, k, rows1, cols1, rows2, cols2;

    // Input dimensions
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &rows1, &cols1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &rows2, &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second.\n");
        return 1;
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display result
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
