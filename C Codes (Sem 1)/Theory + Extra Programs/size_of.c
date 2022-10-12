# include <stdio.h>
# include <math.h>

void main()
    {
        printf("SIZE OF DATA TYPES\n\n");

        printf("size of void         : %d\n", sizeof(void));
        
        printf("size of short int    : %d\n", sizeof(short int));
        printf("size of int          : %d\n", sizeof(int));
        printf("size of long int     : %d\n", sizeof(long int));
        
        printf("size of float        : %d\n", sizeof(float));
        printf("size of double       : %d\n", sizeof(double));
        printf("size of long double  : %d\n", sizeof(long double));

        
        printf("\nRange of unsigned short int : %d to %d", 0, 1 << (8*sizeof(short int)));
        printf("\nRange of signed short int   : %d to %d", 0, 1 << (8*sizeof(short int)));
        
    }