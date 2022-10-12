//Addition of two matrices

# include <stdio.h>

void main()
    {
        int A[10][10], B[10][10], C[10][10], r, c, i, j;
        printf("ADDTION OF TWO MATRICES");
        printf("\n\nEnter the order of the matrix :- \n");
        printf("Enter no. of rows : ");
        scanf("%d", &r);
        printf("Enter no. of columns : ");
        scanf("%d", &c);

        printf("\nEnter first matrix A :-\n");
        for (i=0; i<r; i++)
            {
                for (j=0; j<c; j++)
                    {
                        printf("Enter element A[%d][%d] : ", i, j);
                        scanf("%d", &A[i][j]);
                    }
            }
        
        printf("\nEnter second matrix B :-\n");
        for (i=0; i<r; i++)
            {
                for (j=0; j<c; j++)
                    {
                        printf("Enter element B[%d][%d] : ", i, j);
                        scanf("%d", &B[i][j]);
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

        printf("\nMatrix B :-\n");
        for (i=0; i<r; i++)
            {
                for (j=0; j<c; j++)
                    {
                        printf("%d\t", B[i][j]);
                    }
                printf("\n");
            }

        for (i=0; i<r; i++)
            for (j=0; j<c; j++)
                C[i][j] = A[i][j] + B[i][j];

        printf("\nThe sum of matrix A and B :-\n");
        for (i=0; i<r; i++)
            {
                for (j=0; j<c; j++)
                    {
                        printf("%d\t", C[i][j]);
                    }
                printf("\n");
            }
    }