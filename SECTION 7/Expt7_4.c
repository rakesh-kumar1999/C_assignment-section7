/*Write a program that finds the sum of diagonal elements of a square matrix.*/
#include "stdio.h"
# define max 10
int main()
{
    int matrix[max][max];
    int i, j,size, sum = 0;
    printf("Enter the size of a matrix: ");
    scanf("%d",&size);
    printf("Enter all elements of matrix\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j <size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //display matrix
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n");
    }
    for (i = 0; i <size; i++)
    {
        for (j = 0; j <size; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("\n The sum of diagonal elements is  %d", sum);
    return 0;
}