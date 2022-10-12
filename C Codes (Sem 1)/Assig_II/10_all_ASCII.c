//Print all ASCII character with their values.

# include <stdio.h>
# include <conio.h>

void main()
    {
        int i;
        char c;
        printf("ASCII Control Characters :-\n");            //Non printable characters
        for (i=0; i<=31; i++)
            printf("\nThe code of char %c = %d", i, i);
        
        printf("\n\nASCII Printable Characters :-\n");      //Printable characters
        for (i=32; i<=127; i++)
            printf("\nThe code of char %c = %d", i, i);

        printf("\n\nASCII Extended Characters :-\n");       //Extended 8-Bit characters
        for (i=128; i<=255; i++)
            printf("\nThe code of char %c = %d", i, i);
    }