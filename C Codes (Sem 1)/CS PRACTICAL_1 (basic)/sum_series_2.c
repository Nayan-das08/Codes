//Sum of series : 1^4 + 3^4 + 5^4 + 7^4... till 100 terms

# include <stdio.h>
# include <math.h>

void main()
    {
        long long sum=0;
        int i;

        for (i=1; i<=100; i++)
            {
                sum += pow((2*i-1),4);
            }
        printf("The sum of the series 1^4 + 3^4 + 5^4 + 7^4... till 100 terms = %lld", sum);
    }
