//Formatted Output

# include <stdio.h>
# define CHANGE_a() (a=a*(-1))

void main()
    {
        int a=1;
        printf("Formatting Output");

        printf("\n\nwidth\n\n");
        printf("0 - %d\n", a);
        printf("1 - %1d\n", a);
        printf("2 - %2d\n", a);
        printf("3 - %3d\n", a);
        printf("4 - %4d\n", a);
        printf("5 - %5d\n", a);
        
        printf("\n\nflag : 0\n\n");
        printf("0 - %0d\n", a);
        printf("1 - %01d\n", a);
        printf("2 - %02d\n", a);
        printf("3 - %03d\n", a);
        printf("4 - %04d\n", a);
        printf("5 - %05d\n", a);
        
        printf("\n\nflag : +\n\n");
        printf("0 - %d\n", a);
        printf("1 - %+d\n", a);
        CHANGE_a();
        printf("2 - %+d\n", a);
        CHANGE_a();
        
    }
