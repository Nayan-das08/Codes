//Write a program to find the sum of following series:
//S = 1/1! + 2/2! + 3/3! + ... 7 terms

# include <stdio.h>

void main()
    {
        int i, j;
        float sum = 0, fact;
        printf("SUM OF SERIES : 1/1! + 2/2! + 3/3! + ... FOR 7 TERMS");

        for (i=1; i<=7; i++)
            {
                fact = 1;
                for (j=1; j<=i; j++)            
                    fact *= j;
                sum += i/fact;
            }

        printf("\n\nUpon evaluation,");
        printf("\nfor S = 1/1! + 2/2! + 3/3! + 4/4! + 5/5! + 6/6! + 7/7!");
        printf("\n=>  S = %f", sum);
    }