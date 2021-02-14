/*******************************
    * Omar Reyes *
    * ECE-330 *
    * HW 2 *
*******************************/

#include <iostream>
#include "matrix_dynamic.h"
#include "matrix_dynamic.c"

/* Moved into matrix.h
// My Function Prototype
matrix transpose(matrix m);
*/

int main(int argc, char const *argv[])
{
    int r, c, i, j;
    double val;
    matrix test, trans;

    //Ask user for rows and columns
    std::cout << "How many rows?";
    std::cin >> r;
    std::cout << "How many columns?";
    std::cin >> c;

    //Create empty matrix
    test = create_initval(r,c,0);

    //Store users elements into test
    std::cout << std::endl << "Enter elements of matrix: " << std::endl;
    for(i = 0; i < r; ++i)
    for(j = 0; j < c; ++j)
    {
        std::cout << "Enter element for " << "row [" << i + 1 << ']' << "col [" << j + 1 << ']' << ": ";
        std::cin >> val;
        assign(i,j, &test, val);
    }

    //Print out users matrix
    std::cout << "\n\tYour matrix:";
    matrix_print(test);

    //Print out the transposed matrix
    std::cout << "\n\tHere is your transposed matrix:";
    trans = transpose(test);

    matrix_print(trans);

    return 0;
}

/* Moved into matrix_static.c
matrix transpose(matrix m)
{
    int i,j;
    matrix result;
    result = create_empty(m.col_dim, m.row_dim);
    for (i=0; i<m.row_dim; i++)
    for(j=0; j<m.col.dim; j++)
        result.element[j][i] = m.element[i][j];
    return result;
}
*/
