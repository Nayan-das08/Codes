//Finding particular word in a string

# include <stdio.h>
# include <string.h>

void main()
    {
        char a[20], b[20];
        printf("Enter first string  : ");
        gets(a);
        printf("Enter second string : ");
        gets(b);
        printf("\nResult of strcmpi(a,b): %d", strcmpi(a,b));
        printf("\nResult of strcmp(a,b) : %d", strcmp(a,b));
        printf("\nResult of strcmpi(b,a): %d", strcmp(b,a));
        printf("\nResult of strcmp(b,a) : %d", strcmp(b,a));
    }