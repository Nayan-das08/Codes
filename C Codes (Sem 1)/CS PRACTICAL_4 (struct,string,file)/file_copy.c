//To copy the contents of one file to another file

# include <stdio.h>
# include <stdlib.h>

void main()
    {
        FILE *f1;
        int i, a;
        f1 = fopen("source_file.dat", "wb");
        printf("COPYING CONTENTS OF ONE FILE TO ANOTHER FILE");
        if (f1 == NULL)
            exit(0);
        printf("\n\nEnter 5 numbers in to the file 'source_file.dat' :-\n");
        for (i=1; i<=5; i++)
            {
                printf("\tEnter number 1 : ");
                scanf("%d", &a);
                putw(a,f1);
            }
        fclose(f1);

        FILE *f2, *f3;
        f2 = fopen("source_file.dat", "rb");
        f3 = fopen("target_file.dat", "wb");
        if (f2 == NULL)
            exit(0);
        if (f3 == NULL)
            exit(0);

        for (i=1; i<=5; i++)
            {
                a = getw(f2);
                putw(a,f3);
            }
        fclose(f2);
        fclose(f3);

        FILE *f4, *f5;
        f4 = fopen("source_file.dat", "rb");
        f5 = fopen("target_file.dat", "rb");
        if (f2 == NULL)
            exit(0);
        if (f3 == NULL)
            exit(0);

        printf("\nAfter copying data from 'source_file.dat' to 'target_file.dat'");
        printf("\n\nThe file 'source_file.dat' is :-\n");
        for (i=1; i<=5; i++)
            {
                a = getw(f4);
                printf("%d  ", a);
            }
        
        printf("\n\nThe file 'target_file.dat' is :-\n");
        for (i=1; i<=5; i++)
            {
                a = getw(f5);
                printf("%d  ", a);
            }
    }