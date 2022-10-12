//Displaying Fibonacci series

# include <stdio.h>

void main()
    {
        int L[50], n, i, sum=0;
        L[0] = 0;
        L[1] = 1;
        printf("FIBONACCI SERIES");
        printf("\n\nEnter the no. of terms : ");
        scanf("%d", &n);
        
        for (i=2; i<n; i++)   // loop for creating the series
            {
                L[i] = L[i-1] + L[i-2];
            }
        
        printf("The series upto %d terms is :- \n", n);
        for (i=0; i<n; i++)   // loop for displaying the series
            {
                if (i == n-1)
                    printf("and %d ", L[i]);
                else 
                    printf("%d, ", L[i]);
            }

        for (i=0; i<n; i++)
            {
                sum += L[i];
            }
        printf("\n\nThe sum of fibonacci series upto %d terms is : %d", n, sum);
    }