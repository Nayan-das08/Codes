//Find first and last digit of a number

# include <stdio.h>

void main()
    {
        int n, first, last, r, temp, i=1;
        printf("FINDING FIRST AND LAST DIGITS OF A NUMBER");
        printf("Enter the number : ");
        scanf("%d", &n);
        temp = n;

        while (n != 0)
            {
                r = n % 10;
                if (i == 1)
                    last = r;
                n = n / 10;
                if (n == 0)
                    first = r;
                i++;
            }
        n = temp;

        printf("In the number %d", n);
        printf("\n\tFirst digit = %d", first);
        printf("\n\tLast digit  = %d", last);
    }