//Relation between array and pointers

# include <stdio.h>
# define blank printf("\n")

void main()
    {
        int arr[] = {10, 20, 30, 40, 50, 60};
        int i;

        printf("arr = %d\n", arr);
        printf("*arr = %d\n", *arr);
        printf("arr[0] = %d\n", arr[0]);
        printf("&arr[0] = %d\n", &arr[0]);
        
        printf("\narr   = %d", arr);
    
        blank;

        for (i=0; i<6; i++)
            printf("\narr+%d = %d", i, arr+i);

        blank;

        for (i=0; i<6; i++)
            printf("\n*(arr+%d) = %d", i, *(arr+i));

        blank;

        for (i=0; i<6; i++)
            printf("\n*(%d+arr) = %d", i, *(i+arr));
        
        blank;

        for (i=0; i<6; i++)
            printf("\n%d[arr] = %d", i, i[arr]);

    }
