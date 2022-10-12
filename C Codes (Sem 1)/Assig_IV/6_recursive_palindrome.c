//Check whether a number is palindrome or not using recursion

# include <stdio.h>

int reverse(int x, int y)  
    {
        if (x != 0)
            {
                y = y*10 + x%10;
                return reverse(x/10,y); 
            }
        else 
            return y;
    }

void main()
    {
        int n, rev;
        printf("CHECK WHETHER A NUMBER IS PALINDROME OR NOT");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        rev = reverse(n,0);
        if (rev == n)
            printf("The number %d is a palindrome", n);
        else
            printf("The number %d is not a palindrome", n);
    }