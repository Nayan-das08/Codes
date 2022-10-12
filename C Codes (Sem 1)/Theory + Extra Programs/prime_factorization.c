//Finding the Prime Factorization of a number

# include <stdio.h>

void main()
    {
        int n, i, j, r, prime, factors[20], pos=0, temp;
        printf("PRIME FACTORIZATION OF A NUMBER");
        printf("\n\nEnter the number : ");
        scanf("%d", &n);
        temp = n;
        i=2;
        while (n != 1)
            {
                if (n%i == 0)       //is n divisible by i?
                    {               //is i (divisor) a prime number?
                        prime = 0;      
                        for (j=2; j<i; j++)
                            if (i%j == 0)
                                {
                                    prime = 1;
                                    break;
                                }
                        if (prime == 0)    //if prime, add to array
                            {
                                factors[pos++] = i;
                                n = n / i;
                            }
                    }
                else        //if not divisible by i, increment and check with next
                    {
                        i++;
                    }
            }
        n = temp;
        
        printf("\nThe prime factorization of %d :-\n", n);
        for (i=0; i<pos; i++)
            printf("%d  ", factors[i]);
    }