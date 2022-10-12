//Find sum of digits of a given number using recursion

# include <stdio.h>

int sum_digits(int x, int sum)
    {
        if (x != 0)
            {
                sum += x%10;
                return sum_digits(x/10,sum);
            }
        else
            return sum;
    }

void main()
    {
        int n, sum;
        printf("FIND SUM OF DIGITS OF A NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        sum = sum_digits(n,0);
        printf("sum = %d", sum);
    }