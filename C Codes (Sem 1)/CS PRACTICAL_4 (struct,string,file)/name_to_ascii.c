//Name to ASCII Conversion

# include <stdio.h>

void main()
    {
        char name[30];
        int i=0;
        printf("NAME TO ASCII CONVERSION");
        printf("\n\nEnter the name : ");
        gets(name);
        printf("\nThe ASCII code of the string :-\n");
        while (name[i] != '\0')
            {
                printf("%d ", name[i]);
                i++;
            }            
    }