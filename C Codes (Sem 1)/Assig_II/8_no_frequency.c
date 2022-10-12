//Find frequency of each digit in each integer

# include <stdio.h>

void main()
    {
        int n, count[10]={0}, temp, r, i;
        printf("FREQUENCY OF DIGITS IN A NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        temp = n;

        while (n != 0)
            {
                r = n % 10;
                count[r]++;
                n = n / 10;
            }
        n = temp;

        printf("In the number %d,", n);
        printf("\ndigit | frequency");
        printf("\n-----------------");
        for (i=0; i<10; i++)
            if (count[i] != 0)
        printf("\n  %d   |  %d", i, count[i]);
    }