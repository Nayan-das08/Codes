//Write a program which will store ten integers 
//to one file and stores the odd and even numbers
//to respective files

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>   
# include <math.h> 

void main()
    {
        FILE *f1;
        int a, b, i;
        f1 = fopen("numbers.dat", "wb+");
        if (f1 == NULL)
            exit(0);
        for (i=1; i<=10; i++)
            {
                printf("Enter number %d", i);
                scanf("%d", &a);
                putw(a,f1);
            }
        fclose(f1);

        FILE *f2, *f3, *f4;
        f2 = fopen("numbers.dat", "rb");
        f3 = fopen("even.dat", "wb+");
        f4 = fopen("odd.dat", "wb+");
        if (f2 == NULL)
            exit(0);
        if (f3 == NULL)
            exit(0);
        if (f3 == NULL)
            exit(0);
        
        for (i=1; i<=10; i++)
            {
                b = getw(f2);
                if (b%2 == 0)
                    putw(b, f3);
                else
                    putw(b, f4);
            }
        fclose(f2);
        fclose(f3);
    }