//Write a program which will store ten integers 
//to one file and squares of these numbers to another file.

# include <stdio.h>
# include <stdlib.h>

void main()
    {
        FILE *f1;
        int a, b, i;
        f1 = fopen("numbers.dat", "wb");
        printf("STORING 10 INTEGERS TO ONE FILE AND SQAURES OF THESE NUMBERS TO ANOTHER FILE\n\n");
        if (f1 == NULL)
            exit(0);
        for (i=1; i<=10; i++)
            {
                printf("Enter number %d : ", i);
                scanf("%d", &a);
                putw(a,f1);
            }
        fclose(f1);

        FILE *f2, *f3;
        f2 = fopen("numbers.dat", "rb");
        f3 = fopen("square.dat", "wb+");
        if (f2 == NULL)
            exit(0);

        for (i=1; i<=10; i++)
            {
                b = getw(f2);
                a = b*b;
                putw(a, f3);
            }
        fclose(f2);
        fclose(f3);

        FILE *abc, *xyz;
        abc = fopen("square.dat", "rb");
        xyz = fopen("numbers.dat", "rb");
        if (abc == NULL)
            exit(0);
        if (xyz == NULL)
            exit(0);

        printf("\nThe file numbers.dat is :-\n");
        for (i=1; i<=10; i++)
            {
                a = getw(xyz);
                printf("%d  ", a);
            }
            
        printf("\n\nThe file square.dat is :-\n");
        for (i=1; i<=10; i++)
            {
                a = getw(abc);
                printf("%d  ", a);
            }

        fclose(abc);
        fclose(xyz);
    }
