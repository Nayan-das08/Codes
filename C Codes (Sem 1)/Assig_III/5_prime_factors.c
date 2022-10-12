//Find all prime factors of a number (Not prime factorization)

# include <stdio.h>

void main()
    {
        int n, i, j, factors[20], pos=0, prime, empty=1;
        printf("PRIME FACTORS OF A NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        
        for (i=2; i<n; i++)
            {
                if (n%i == 0)
                    {
                        prime = 0;
                        for (j=2; j<i; j++)
                            if (i%j == 0)
                                {
                                    prime = 1;
                                    break;
                                }
                        if (prime == 0)
                            {
                                factors[pos++] = i;
                                empty = 0;
                            }
                    }
            }
        if (empty == 1)
            {
                printf("The number %d is a prime number, hence has no factors", n);
            }
        else
            {            
                printf("The prime factors are :-\n");
                for (i=0; i<pos; i++)
                    printf("%d ", factors[i]);
            }
    }