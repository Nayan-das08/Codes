//Generate nth Fibonacci term using recursion

# include <stdio.h>

void fibo(int x, int a, int b)
    {
        static int count=1;
        
        if (count != x)
            {
                b = a+b;
                a = b-a;
                count++;
                fibo(x,a,b);
            }
        else 
            printf("%dth term of Fibonacci series : %d", x, a);
    }

void main()
    {
        int n;
        printf("NTH TERM OF FIBONACCI SERIES");
        printf("\n\nEnter the term number : ");
        scanf("%d", &n);
        fibo(n,0,1);
    }