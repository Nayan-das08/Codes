#include <stdio.h>

void printmats(int W, int n, int C[11][11], int Keep[11][11]) 
{
    int i, w;
    printf("\n C matrix: ");
    printf("\n");
    for ( i = 0; i <= n; i++ )  // for each item in C table
    {
        for ( w = 0; w <= W; w++ )  // for weight in each column in C table
        {
            printf("%2d ", C[i][w]);
        }
        printf("\n");
    }
    printf("\n Keep matrix: ");
    printf("\n");
    for ( i = 0; i <= n; i++ )  // for each item in C table
    {
        for ( w = 0; w <= W; w++ )  // for weight in each column in C table
        {
            printf("%2d ", Keep[i][w]);
        }
        printf("\n");
    }
}

void knapSack(int W, int wt[], int val[], int n) {
    printf("hello");
    int i, w, k;
    int C[n + 1][W + 1];
    int Keep[n + 1][W + 1];

    for ( int i = 0; i <= n; i++ )  // for each item in C table
    {
        for ( int w = 0; w <= W; w++ )  // for weight in each column in C table
        {
            if ( i == 0 || w == 0 ) {
                C[i][w]    = 0;
                Keep[i][w] = 0;
            } else {
                C[i][w]    = -1;
                Keep[i][w] = -1;
            }
        }
    }

    for ( i = 1; i <= n; i++ ) 
    {
        for ( w = 1; w <= W; w++ ) 
        {
            // if ( wt[i - 1] <= w &&
            //      val[i - 1] + C[i - 1][w - wt[i - 1]] > C[i - 1][w] ) {
            //     C[i][w]    = val[i - 1] + C[i - 1][w - wt[i - 1]];
            //     Keep[i][w] = 1;
            // } else 
            // {
            //     C[i][w]    = C[i - 1][w];
            //     Keep[i][w] = 0;
            // }
            if ( wt[i] <= w &&
                 val[i] + C[i - 1][w - wt[i]] > C[i - 1][w] ) {
                C[i][w]    = val[i] + C[i - 1][w - wt[i]];
                Keep[i][w] = 1;
            } else 
            {
                C[i][w]    = C[i - 1][w];
                Keep[i][w] = 0;
            }
        }
    }

    printf("\nFinal Matrices:");
    printmats(W, n, C, Keep);

    printf("\n Max profit: ");
    // printf("%d", C[i][w]);
    printf("%d", C[5][W]);

    k = W;
    printf("\n Sequence: ");
    for ( i = n; i >= 1; i-- ) 
    {
        if ( Keep[i][k] == 1 ) {
            printf("%d ", i);
            k = k - wt[i - 1];
        }
    }
}

int main() 
{
    int W,n,i;
    int wt[50];
    int val[50];
    printf("\n Enter the Max capacity: ");
    scanf("%d",&W);
    printf("\n Enter the no. of items: ");
    scanf("%d",&n);
    printf("\n Enter the Wt. & Val. of items: ");
    for(i=1;i<=n;i++)
    {
        printf("\n Wt. of item %d: ",i);
        scanf("%d",&wt[i]);
        printf("\n Val. of item %d: ",i);
        scanf("%d",&val[i]);
    }

    printf("\nSolving Knapsack Problem for W=10: ");
    knapSack(W, wt, val, n);
}


/*
10
5
1
1
2
6
5
18
6
22
7
28
*/