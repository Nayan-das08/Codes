//Find all factors of a number

# include <stdio.h>

void main()
    {
        int n, i, factors[20], pos=1;
        printf("FACTORS OF A NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        factors[0] = 1;
        for (i=2; i<n; i++)
            {
                if (n%i == 0)
                    factors[pos++] = i;
            }
        factors[pos] = n;
        printf("The factors are :-\n");
        for (i=0; i<=pos; i++)
            printf("%d ", factors[i]);
    }