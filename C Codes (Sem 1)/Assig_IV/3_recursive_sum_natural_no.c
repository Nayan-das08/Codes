//Find sum of all-natural numbers between 1 to n using recursion

# include <stdio.h>

int sum; 

void sum_n(int x)
    {
        if (x < 1)
            return;
        sum += x;
        sum_n(x-1);
    }

void main()
    {
        int n; 
        printf("SUM OF ALL NATURAL NUMBERS FROM 1 TO N");
        printf("\n\nEnter the number till which sum is to be calculated : ");
        scanf("%d", &n);
        sum_n(n);
        printf("The sum of numbers from 1 to %d = %d", n, sum);
    }