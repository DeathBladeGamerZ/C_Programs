#include <stdio.h>

int main() {
    int i, j, num = 1;
    int rows;
    
    // Take user input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (i = 1; i <= rows; i++) {   
        // Print spaces for alignment
        for (j = 1; j <= (rows - i); j++) {
            printf(" ");
        }
        
        // Print numbers with dynamic spacing
        for (j = 1; j <= i; j++) {
            printf("%2d ", num); // Ensures proper alignment for single and double-digit numbers
            num++;
        }
        
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}
