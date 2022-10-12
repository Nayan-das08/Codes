# include <stdio.h>
# include <string.h>
# include <ctype.h>   
# include <math.h> 

void main()
    {
        int a = 89;
        int *ptr_1;
        ptr_1 = &a;

        printf("%p\n", ptr_1);      //valid
        printf("%p\n", &a);         //valid
        printf("%p\n", a);          //invalid for printing address
    }
