//Pascal's Triangle

# include <stdio.h>
# include <math.h>

void main()
    {
        int n, i, a, r, j;
        printf("Enter the number of rows : ");
        scanf("%d", &n);
        for (i=0; i<n; i++)
            {
                a = pow(11,i);
                for (j=1; j<=15; j++)
                    printf(" ");
                while (a != 0)
                    {
                        r = a % 10;
                        a = a / 10;
                        printf("%d  ", r);    
                    }
                printf("\n");
            }
    }