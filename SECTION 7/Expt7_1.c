/*Write a program to input a square matrix (a matrix of order n × n) and check whether it is 
symmetric or not (A matrix A = (aij) is symmetric if aij = aji, for all i and j)-+*/
#include"stdio.h"
# define max 5
int main()
{  
    int matrix[max][max],transpose[max][max];
    int i,j,size,issymmetric;
    printf("Enter the size of the square matrix\n");
    scanf("%d",&size);
    printf("\nEnter %d number of elements in the matrix\n",size*size);
    //matrix
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    //transpose
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
    issymmetric=1;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(matrix[i][j]!=transpose[i][j]){
                issymmetric=0;
            }
        }
    }
    if(issymmetric==0)
    {
        printf(" Not symmetric");
    } else
    {
        printf("symmetric");
    }
    return 0;
}