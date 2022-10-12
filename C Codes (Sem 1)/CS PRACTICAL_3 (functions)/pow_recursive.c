//To find power of any number using recursion

# include <stdio.h>

int power(int x, int y)
    {
        static int i = 1;
        if (i < y)
            {
                i++;
                return x * power(x,y);
            }
        else
            return x;
    }

void main()
    {
        int n, exp;
        printf("Enter the base  : ");
        scanf("%d", &n);
        printf("Enter the power : ");
        scanf("%d", &exp);

        printf("%d^%d = %d", n, exp, power(n, exp));
    }