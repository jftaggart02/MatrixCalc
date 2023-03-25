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
    const int matrix_row = 2;
    const int matrix_col = 4;
    int pvt_row = 0;
    int temp1 = 0, temp2 = 0;
    int i;

    int a[3][5] = {{0, 2, 4, 1, 6}, 
                   {2, 3, 5, 7, 9}, 
                   {1, 2, 6, 3, 6}};

    // while (pvt_row <= matrix_row)
    // {
        // 1. FIND FIRST NONZERO ENTRY
        while (1)
        {
            if (a[row][col] != 0)
            {
                break;
            }
            else if (a[row][col] == 0 && row < matrix_row)
            {
                row++;
            }
            else if (a[row][col] == 0 && row == matrix_row)
            {
                goto end_of_loop;
            }
        }

        // 2. PUT IT IN THE PIVOT SPOT
        if (row > pvt_row)
        {
            // Switches row with pivot_row
            for (i = 0; i <= matrix_col; i++)
            {
                temp1 = a[pvt_row][i];
                a[pvt_row][i] = a[row][i];
                a[row][i] = temp1;
            }
        }
        
        pvt_row++;
        end_of_loop:
        col++;
    // }


	return 0;
// END
}