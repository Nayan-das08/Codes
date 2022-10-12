//Find product, sum, average, max and min from a list of n numbers.

# include <stdio.h>

void main()
    {
        int arr[50], n, i, sum=0, max=0, min=0, temp;
        float avg;
        printf("SUM, AVERAGE, MAXIMUM AND MINIMUM");
        printf("\n\nEnter the number of elements : ");
        scanf("%d", &n);
        printf("\nEnter the elements :-\n");
        
        for (i=0; i<n; i++)             
            {
                printf("Element %d : ", i+1);
                scanf("%d", &arr[i]);

                sum += arr[i];          
                
                if (i==0)
                    max = min = arr[0];
                if (arr[i] > max)
                    max = arr[i];
                if (arr[i] < min)
                    min = arr[i];
            }
        
        avg = (float)sum/n;

        printf("\nSum = %d", sum);
        printf("\nAverage = %0.2f", avg);
        printf("\nMax = %d", max);
        printf("\nMin = %d", min);
        
    }