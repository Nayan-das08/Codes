//To find all prime numbers between given interval using functions

# include <stdio.h>

void prime_range(int x, int y)
    {
        int i, flag, j;
        printf("\nThe prime no. between %d and %d are :-\n", x, y);
        for (i=x; i<=y; i++)
            {
                flag = 0;
                for (j=2; j<i; j++) 
                    {
                        if (i%j == 0)
                            {
                                flag = 1;
                                break;
                            }
                    }
                if (flag == 0)
                    printf("%d  ", i);
            }
    }

void main()
    {
        int a, b;
        printf("DISPLAYING PRIME NUMBERS WITHIN LIMIT");
        printf("\n\nEnter lower limit : ");
        scanf("%d", &a);
        printf("Enter upper limit : ");
        scanf("%d", &b);
        
        prime_range(a,b);
    }