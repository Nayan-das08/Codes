//Find reverse of any number using recursion

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
        int n;
        printf("FIND REVERSE OF A NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        printf("Reverse of %d = %d", n, reverse(n,0));
    }