/*: Write a program that finds the sum of each row and sum of each column of a matrix.*/
#include"stdio.h"
# define max 10
int main()
{  int matrix[max][max];
    int i, j,size,sum;
    printf("Enter the size of a matrix: ");
    scanf("%d",&size);
    printf("Enter all elements of matrix\n");
    //enter the value of matrix
    for (i = 0; i < size; i++)
    {
        for (j = 0; j <size; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //display matrix
    printf("matrix:\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n");
    }
    //for sum of row
    for(i=0;i<size;i++){
        sum=0;
        for(j=0;j<size;j++){
            sum=sum+matrix[i][j];
        }
        printf("\nThe sum of %d row is %d",i+1,sum);
    }
    //for sum of column
    for(i=0;i<size;i++){
        sum=0;
        for(j=0;j<size;j++){
            sum=sum+matrix[j][i];
        }
        printf("\nThe sum of %d column is %d",i+1,sum);
    }
    return 0;
}