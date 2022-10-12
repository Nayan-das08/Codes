//Calculating sum of digits of a number

# include <stdio.h>

void main()
    {
        int n, sum=0, temp;
        printf("SUM OF DIGITS");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        temp = n;

        while (n != 0)
            {
                sum = sum + n % 10;
                n = n / 10;
            }
        n = temp;
        printf("The sum of digits of %d = %d", n, sum);
    }
