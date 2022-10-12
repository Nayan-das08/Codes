//Checking for an Armstrong number

# include <stdio.h>

void main()
    {
        int n, temp, r, m=0, i=0;
        printf("ARMSTRONG NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        temp = n;
        
        while (n != 0)
            {
                r = n % 10;
                m = m + (r*r*r);
                n = n / 10;
            }

        n = temp;
        if (n == m)
            printf("The number %d is an armstrong number", n);
        else
            printf("The number %d is not an armstrong number", n);
    }