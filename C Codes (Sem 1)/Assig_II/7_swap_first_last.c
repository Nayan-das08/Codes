//Swap first and last digits of a number

# include <stdio.h>
# include <math.h>

void main()
    {
        int n, first, last, r, temp, i=1, dig=0;
        printf("SWAPPING FIRST AND LAST DIGITS OF A NUMBER");
        printf("\NEnter the number : ");
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
                dig++;
            }
        n = temp;

        if (first > last)
            {
                n = n - (first - last)*pow(10,dig-1);
                n = n + (first - last);
            }
        else if (last > first)
            {
                n = n - (last - first)*pow(10,dig-1);
                n = n + (last - first);
            }

        printf("After changing, the number is : %d", n);
    }