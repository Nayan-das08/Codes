//Find GCD (HCF) of two numbers using recursion

# include <stdio.h>

int hcf_func(int x, int y)
    {
        if (y != 0)
            return hcf_func(y, x%y);
        else
            return x;
    }

void main()
    {
        int a, b, temp, hcf;
        printf("HCF OF TWO NUMBERS");
        printf("\n\nEnter the first number  : ");
        scanf("%d", &a);
        printf("Enter the second number : ");
        scanf("%d", &b);

        if (a < b)      //all operations are based on the assumption that a > b
            {
                temp = a;
                a = b;
                b = temp;               
            }

        printf("\nThe HCF of %d and %d = %d", a, b, hcf_func(a,b));

    }