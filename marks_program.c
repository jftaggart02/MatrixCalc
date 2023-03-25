#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int array[rows][cols+1];
    int i, j;

    printf("Enter the elements of the array\n");

    for (i = 0; i < rows; i++) {
        printf("Enter row %d:", i+1);
        for (j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("Enter the b vector \n");
    for (i = 0; i < rows; i++) {
            j = cols;
            scanf("%d", &array[i][j]);
    }
    printf("Array contents:\n");

    for (i = 0; i < rows; i++) {
        printf(" | ");
        for (j = 0; j < cols + 1; j++) {
            printf("%d ", array[i][j]);
        }
        printf("|");
        printf("\n");
    }

    return 0;
}