//Sum of series : 2^4 + 6^4 + 10^4 + 14^4... till n terms

# include <stdio.h>
# include <math.h>

void main()
    {
        long long sum=0;
        int i, n, k=2;
        printf("SUM OF SERIES 2^4 + 6^4 + 10^4 + 14^4... TILL N TERMS");
        printf("\n\nEnter the no. of terms : ");
        scanf("%d", &n);  

        for (i=1; i<=n; i++)
            {
                sum += pow(k,4);
                k += 4;
            }
        printf("The sum of the series : 2^4 + 6^4 + 10^4 + 14^4... till %d terms = %lld",n , sum);
    }
