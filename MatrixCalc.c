#include <stdio.h>



/******************************************************************************

FUNCTION TITLE: Matrix Calculator

DESCRIPTION: Reduces a matrix to reduced row echelon form and finds the
solution.

*******************************************************************************

PSEUDOCODE:

IN EACH COLUMN:
1. FIND FIRST NONZERO ENTRY
2. PUT IT IN THE PIVOT SPOT
3. SCALE THE ROW SO THE PIVOT IS 1
4. ELMINATE ENTRIES BELOW AND ABOVE TO 0

*******************************************************************************

INPUTS: none

OUTPUTS: none

******************************************************************************/

int main()
// BEGIN
{

	int row = 0, col = 0;
    const int rows = 3;
    const int cols = 5;
    int pvt_row = 0;
    int temp1 = 0, temp2 = 0;
    int i, j;

    int a[3][5] = {{0, 0, 0, 5, 4}, 
                   {0, 1, 0, 0, 9}, 
                   {0, 0, 1, 8, 0}};

    printf("Array contents:\n");

    for (i = 0; i < rows; i++) {
        printf(" | ");
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("|");
        printf("\n");
    }

    while (pvt_row < rows)
    {
        // 1. FIND FIRST NONZERO ENTRY
        while (1)
        {
            if (a[row][col] != 0)
            {
                break;
            }
            else if (a[row][col] == 0 && row < (rows - 1))
            {
                row++;
            }
            else if (a[row][col] == 0 && row == (rows - 1))
            {
                goto end_of_loop;
            }
        }

        // 2. PUT IT IN THE PIVOT SPOT
        if (row > pvt_row)
        {
            // Switches row with pivot_row
            for (i = 0; i < cols; i++)
            {
                temp1 = a[pvt_row][i];
                a[pvt_row][i] = a[row][i];
                a[row][i] = temp1;
            }
        }
        
        pvt_row++;
        row = pvt_row;
        end_of_loop:
        col++;

        // print array contents:
        printf("Array contents:\n");

        for (i = 0; i < rows; i++) {
            printf(" | ");
            for (j = 0; j < cols; j++) {
                printf("%d ", a[i][j]);
            }
            printf("|");
            printf("\n");
        }

        // wait for enter key
        getchar();

        if (row == pvt_row)
        {
            break;
        }

    }

    

	return 0;
// END
}