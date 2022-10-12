//Display the index of smallest and largest element in 10 integers

# include <stdio.h>

void main()
    {
        int arr[50], i, max, min, pos_max, pos_min;
        printf("INDEX OF SMALLEST AND LARGEST ELEMENT IN A LIST");
        printf("\n\nEnter the elements :-\n");
        
        for (i=0; i<10; i++)         //Entering the elements
            {
                printf("Element %d : ", i);
                scanf("%d", &arr[i]);
                if (i == 0)
                    max = min = arr[0];
                if (arr[i] > max)
                    {
                        pos_max = i;
                        max = arr[i];
                    }
                if (arr[i] < min)
                    {
                        pos_min = i;
                        min = arr[i];
                    }
            }

        printf("\nIndex of largest number  : %d", pos_max);
        printf("\nIndex of smallest number : %d", pos_min);
    }