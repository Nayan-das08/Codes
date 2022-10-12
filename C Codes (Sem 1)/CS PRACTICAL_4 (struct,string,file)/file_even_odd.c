//Write a program which will store ten integers to one file
//and stores the odd and even numbers to respective files

# include <stdio.h>
# include <stdlib.h>

void main()
    {
        FILE *f1;
        int a, b, i, e=0, o=0;
        f1 = fopen("numbers.dat", "wb");
        printf("STORING 10 INTEGERS TO ONE FILE AND STORING EVEN AND ODD NUMBERS IN RESP. FILES\n\n");
        if (f1 == NULL)
            exit(0);
        for (i=1; i<=10; i++)
            {
                printf("Enter number %d : ", i);
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
        if (f4 == NULL)
            exit(0);
        
        for (i=1; i<=10; i++)
            {
                b = getw(f2);
                if (b%2 == 0)
                    {
                        putw(b, f3);
                        e++;
                    }
                else
                    {
                        putw(b, f4);
                        o++;
                    }
            }
        fclose(f2);
        fclose(f3);
        fclose(f4);

        FILE *abc, *xyz;
        abc = fopen("even.dat", "rb");
        xyz = fopen("odd.dat", "rb");
        if (abc == NULL)
            exit(0);
        if (xyz == NULL)
            exit(0);

        printf("\nThe file even.dat is :-\n");
        for (i=1; i<=e; i++)
            {
                a = getw(abc);
                printf("%d  ", a);
            }
            
        printf("\n\nThe file odd.dat is :-\n");
        for (i=1; i<=o; i++)
            {
                a = getw(xyz);
                printf("%d  ", a);
            }

        fclose(abc);
        fclose(xyz);
    }