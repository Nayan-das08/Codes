//Displaying prime numbers within a limit

# include <stdio.h>

void main()
    {
        int r, i, j, a, b, flag;
        printf("DISPLAYING PRIME NUMBERS WITHIN LIMIT");
        printf("\n\nEnter lower limit : ");
        scanf("%d", &a);
        printf("Enter upper limit : ");
        scanf("%d", &b);
        
        printf("\nThe prime no. between %d and %d are :-\n", a, b);
        for (i=a; i<=b; i++)
            {
                flag = 0;
                for (j=2; j<i; j++)
                    {
                        r = i%j;
                        if (r == 0)
                            {
                                flag = 1;
                                break;
                            }
                    }
                if (flag == 0)
                    printf("%d  ", i);
            }   
    }