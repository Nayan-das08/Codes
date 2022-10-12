//Subtraction of two matrices

# include <stdio.h>

void main()
    {
        int A[10][10], B[10][10], C[10][10], r, c, i, j;
        printf("TRANSPOSE OF A MATRIX");
        printf("\n\nEnter the order of the matrix :- \n");
        printf("Enter no. of rows : ");
        scanf("%d", &r);
        printf("Enter no. of columns : ");
        scanf("%d", &c);

        printf("\nEnter the matrix (say A):-\n");
        for (i=0; i<r; i++)
            {
                for (j=0; j<c; j++)
                    {
                        printf("Enter element A[%d][%d] : ", i, j);
                        scanf("%d", &A[i][j]);
                    }
            }
        
        printf("\nMatrix A :-\n");
        for (i=0; i<r; i++)
            {
                for (j=0; j<c; j++)
                    {
                        printf("%d\t", A[i][j]);
                    }
                printf("\n");
            }
        
        for (i=0; i<c; i++)
            {
                for (j=0; j<r; j++)
                    B[i][j] = A[j][i];
            }

        printf("\nTranspose of Matrix A :-\n");
        for (i=0; i<c; i++)
            {
                for (j=0; j<r; j++)
                    {
                        printf("%d\t", B[i][j]);
                    }
                printf("\n");
            }
    }