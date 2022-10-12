//Count number of digits in a number

# include <stdio.h>

void main()
    {
        int n, dig, r, temp;
        printf("NUMBER OF DIGITS IN A NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        temp = n;

        while (n != 0)
            {
                r = n % 10;
                dig++;
                n = n / 10;
            }
        n = temp;

        printf("The no. of digits in %d = %d", n, dig);
    }