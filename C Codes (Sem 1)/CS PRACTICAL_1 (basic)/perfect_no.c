//Checking for a Perfect number

# include <stdio.h>

void main()
    {
        int n, temp, r, m = 1, i;
        printf("PERFECT NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        temp = n;
        
        for (i=2; i<=(n/2); i++)
            {
                r = n % i;
                if (r == 0)
                    m += i;
            }
        
        n = temp;

        if (n == m)
            printf("The number %d is a perfect number", n);
        else
            printf("The number %d is not a perfect number", n);
    } 
