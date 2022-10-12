//Concatenation of strings without strcat()

# include <stdio.h>
# include <string.h>

void main()
    {
        char a[50], b[50];
        int i, j;
        printf("Enter first string : ");
        gets(a);
        printf("Enter second string  : ");
        gets(b);

        i = strlen(a);
        j = 0;

        while ((i < 50-1) && (j < strlen(b)))
            {
                a[i] = b[j];
                printf("a : %s\n", a);
                printf("b : %s\n\n", b);
                i++;
                j++;
            }
        
        a[i] = '\0';
            
        printf("\nAltered string 'a' : %s", a);
    }
