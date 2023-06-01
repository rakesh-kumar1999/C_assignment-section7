/*Write a program to input a square matrix (a matrix of order n × n) and then print its upper 
triangular matrix.*/
#include"stdio.h"
# define max 5
int main()
{  int matrix[max][max];
    int i, j,size,sum;
    printf("Enter the size of a matrix: ");
    scanf("%d",&size);
    printf("Enter all elements of matrix\n");
    //for a matrix
    for (i = 0; i < size; i++)
    {
        for (j = 0; j <size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //for upper triangular
    for (i = 0; i < size; i++)
    {
        for (j = 0; j <size; j++)
        {
            if(i>j)
            {
                matrix[i][j]=0;
            }
        }
    }
    printf("\nThe upper triangular matrix is:\n");
    //for display
    for (i = 0; i < size; i++)
    {
        for (j = 0; j <size; j++)
        {
            printf("%-5d",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}