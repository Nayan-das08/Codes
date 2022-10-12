//Display the index of smallest and largest element in a 3X4 matrix

# include <stdio.h>

void main()
    {
        int arr[50][50], i, j, max, min, i_max, j_max, i_min, j_min;
        printf("INDEX OF SMALLEST AND LARGEST ELEMENT IN A 3X4 MATRIX");
        printf("\n\nEnter the elements :-\n");
        
        for (i=0; i<3; i++)
            {
                for (j=0; j<4; j++)
                    {
                        printf("Element [%d][%d] : ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
            }
        
        max = min = arr[0][0];
        i_max = j_max = i_min = j_min = 0;
        for (i=0; i<3; i++)
            {
                for (j=0; j<4; j++)
                    {
                        if (arr[i][j] > max)
                            {
                                i_max = i;
                                j_max = j;
                                max = arr[i][j];
                            }
                        if (arr[i][j] < min)
                            {
                                i_min = i;
                                j_min = j;
                                min = arr[i][j];
                            }
                    }
            }
        
        printf("\nThe matrix is :-\n");
        for (i=0; i<3; i++)
            {
                for (j=0; j<4; j++)
                    printf("%d\t", arr[i][j]);
                printf("\n");
            }

        printf("\nIndex of largest number  : %d,%d", i_max, j_max);
        printf("\nIndex of smallest number : %d,%d", i_min, j_min);
    }