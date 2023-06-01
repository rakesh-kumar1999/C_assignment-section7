/*: Write a menu-based program that takes two matrixes A and B as input and displays the
results of the following operations based on user’s choice.
1. A + B
2. A - B
3. B - A
4. A × B*/
#include "stdio.h"
#include "stdlib.h"
#define size 3
void create_matrix(int c, int mat[][c], int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}
void display(int c, int mat[][c], int r)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n\n");
    }
}
void matrixadd(int C1, int mat1[][C1], int R1, int C2, int mat2[][C2], int R2)
{
    int result[R1][C1];
    if (R1 == R2 && C1 == C2)
    {
        for (int i = 0; i < R1; i++)
        {
            for (int j = 0; j < C1; j++)
            {
                result[i][j] = mat1[i][j] + mat2[i][j];
            }
        }

        printf("Matrix addition :(A+B) =\n");
        display(C1, result, R1);
    }
    else
        printf("Enter valid row and col size for matrix_addition");
}
void matrixsubA_B(int C1, int mat1[][C1], int R1, int C2, int mat2[][C2], int R2)
{
    int result[R1][C1];
    if (R1 == R2 && C1 == C2)
    {
        for (int i = 0; i < R1; i++)
        {
            for (int j = 0; j < C1; j++)
            {
                result[i][j] = mat1[i][j] - mat2[i][j];
            }
        }

        printf("Matrix subtraction: (A-B) =\n");
        display(C1, result, R1);
    }
    else
        printf("Enter valid row and col size for matrix_subtraction");
}
void matrixsubB_A(int C2, int mat2[][C2], int R2, int C1, int mat1[][C1], int R1)
{
    int result[R2][C2];
    if (R1 == R2 && C1 == C2)
    {
        for (int i = 0; i < R2; i++)
        {
            for (int j = 0; j < C2; j++)
            {
                result[i][j] = mat2[i][j] - mat1[i][j];
            }
        }

        printf("Matrix subtraction: (B-A) =\n");
        display(C2, result, R2);
    }
    else
        printf("Enter valid row and col size for matrix_subtraction");
}
void matrixmulti(int C1, int mat1[][C1], int R1, int C2, int mat2[][C2], int R2)
{
    int sum, result[R1][C2];
    if (C1 == R2)
    {
        for (int i = 0; i < R1; i++)
        {
            for (int j = 0; j < C2; j++)
            {
                sum = 0;
                for (int k = 0; k < R2; k++)
                {
                    sum = sum + mat1[i][k] * mat2[k][j];
                    result[i][j] = sum;
                }
            }
        }
        printf("\nAfter matrix multiplication the resultant matrix\n");
        display(C2, result, R1);
    }
    else
        printf("Enter valid row and col size for matrix_multiplication");
}
void main()
{
    int A[size][size], B[size][size];
    int choice, rowA, colA, rowB, colB;

    printf("Enter row and col size of the matrix A:\n");
    scanf("%d %d", &rowA, &colA);
    printf("Enter the %d elements for matrix A:\n", rowA * colA);
    create_matrix(colA, A, rowA);

    printf("Enter row and col size of the matrix B:\n");
    scanf("%d %d", &rowB, &colB);
    printf("Enter the %d elements for matrix B:\n", rowB * colB);
    create_matrix(colB, B, rowB);

    printf("matrix A:\n");
    display(colA, A, rowA);
    printf("matrix B:\n");
    display(colB, B, rowB);

    while (1)
    {
        printf("\n1. A + B\n2. A - B\n3. B - A\n4. A x B\n5.For exit\n");
        printf("\nEnter the choice by pressing a number: ");
        scanf("%d", &choice);
        // menu_based program
        switch (choice)
        {
        // A+B
        case 1:
            matrixadd(colA, A, rowA, colB, B, rowB);
            break;
        // A-B
        case 2:
            matrixsubA_B(colA, A, rowA, colB, B, rowB);
            break;

        // B-A
        case 3:
            matrixsubB_A(colB, B, rowB, colA, A, rowA);
            break;

        // A*B
        case 4:
            matrixmulti(colA, A, rowA, colB, B, rowB);
            break;
            // for exit
        case 5:
            exit(0);
        default:
            printf("Invalid choice");
        }
        printf("\n--------------\t------------\n");
    }
}