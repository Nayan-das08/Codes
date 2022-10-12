//Multiplication of two matrices

# include <stdio.h>
# include <stdlib.h>

void main()
    {
        int A[10][10], B[10][10], C[10][10]={0}, r1, c1, r2, c2, i, j, k;
        printf("SUBTRACTION OF TWO MATRICES");
        printf("\n\nEnter the order of the matrix A :- \n");
        printf("Enter no. of rows : ");
        scanf("%d", &r1);
        printf("Enter no. of columns : ");
        scanf("%d", &c1);
        
        printf("\nEnter the order of the matrix B :- \n");
        printf("Enter no. of rows : ");
        scanf("%d", &r2);
        printf("Enter no. of columns : ");
        scanf("%d", &c2);

        if (c1 != r2)
            {
                printf("\nThe multiplication for the entered orders is illegal !!");
                exit(0);
            }
        else
        {
            printf("\nEnter first matrix A :-\n");
            for (i=0; i<r1; i++)
                {
                    for (j=0; j<c1; j++)
                        {
                            printf("Enter element A[%d][%d] : ", i, j);
                            scanf("%d", &A[i][j]);
                        }
                }
        
            printf("\nEnter second matrix B :-\n");
            for (i=0; i<r2; i++)
                {
                    for (j=0; j<c2; j++)
                        {
                            printf("Enter element B[%d][%d] : ", i, j);
                            scanf("%d", &B[i][j]);
                        }
                }
        
            printf("\nMatrix A :-\n");
            for (i=0; i<r1; i++)
                {
                    for (j=0; j<c1; j++)
                        {
                            printf("%d\t", A[i][j]);
                        }
                    printf("\n");
                }

            printf("\nMatrix B :-\n");
            for (i=0; i<r2; i++)
                {
                    for (j=0; j<c2; j++)
                        {
                            printf("%d\t", B[i][j]);
                        }
                    printf("\n");
                }

            for (i=0; i<r1; i++)
                for (j=0; j<c2; j++)
                    C[i][j] = 0;

            for (i=0; i<r1; i++)
                for (j=0; j<c2; j++)
                    for (k=0; k<c2; k++)
                        C[i][j] = C[i][j] + A[i][k]*B[k][j];

            printf("\nThe product of matrix A and B :-\n");
            for (i=0; i<r1; i++)
                {
                    for (j=0; j<c2; j++)
                        {
                            printf("%d\t", C[i][j]);
                        }
                    printf("\n");
                }
        }
        
        
    }