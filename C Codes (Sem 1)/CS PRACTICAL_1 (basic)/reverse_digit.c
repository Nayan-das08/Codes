//Checking for a palindrome number

# include <stdio.h>

void main()
    {
        int n, temp, r, m=0, i=0;
        printf("REVERSE OF A NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        temp = n;
        
        while (n != 0)
            {
                r = n % 10;
                m = (10*m) + r;
                n = n / 10;
                i++;
            }
        n = temp;
        
        if (n == m)
            printf("The number %d is a palindrome", n);
        else
            printf("The reverse of %d = %d", n, m);
    }