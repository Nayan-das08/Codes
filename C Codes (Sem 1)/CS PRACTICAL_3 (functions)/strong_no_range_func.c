//To print all strong numbers between given interval using functions

# include <Stdio.h>

void strong_range(int x, int y)
    {
        int r, i, j, flag, sum, fact, temp, strong = 0;
        printf("\nThe strong numbers from %d to %d are :-\n", x, y);

        for (i=x; i<=y; i++)
            {
                sum = 0;
                temp = i;
                while (i != 0)
                    {
                        r = i % 10;
                        if (r == 0)
                            fact = 1;
                        else
                            {
                                fact = 1;
                                for (j=2; j<=r; j++)
                                    fact = fact * j;
                            }
                        sum = sum + fact;
                        i = i / 10;
                    }
                i = temp;
                if (i == sum)
                    {
                        printf("%d  ", sum);
                        strong = 1;
                    }
            }
        if (strong == 0)
            printf("No strong numbers found in this range");
    }

void main()
    {
        int a, b;
        printf("DISPLAYING STRONG NUMBERS WITHIN LIMIT");
        printf("\n\nEnter lower limit : ");
        scanf("%d", &a);
        printf("Enter upper limit : ");
        scanf("%d", &b);
        
        strong_range(a,b);
    }