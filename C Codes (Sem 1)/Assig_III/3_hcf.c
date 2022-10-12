//Find HCF (GCD) of two numbers

# include <stdio.h>

void main()
    {
        int a, b, i, temp, n, m, r; 
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
        n = a;                  //n = dividend
        m = b;                  //m = divisor

        while (n != 0)
            {
                r = n % m;
                if (r == 0)
                    break;
                n = m;
                m = r;
            }

        printf("\nThe HCF of %d and %d = %d", a, b, m);
    }