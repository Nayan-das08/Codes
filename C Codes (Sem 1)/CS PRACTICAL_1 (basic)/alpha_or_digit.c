//To check whether a character is alphabet or digit

#include <stdio.h>

void main()
    {
        char ch;
        printf("CHECKING FOR APLHABET/DIGIT");
        printf("\n\nEnter a character : ");
        scanf("%c", &ch);

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            printf("\nThe character %c is an alphabet", ch);
        else if (ch >= '0' && ch <= '9')      
            printf("\nThe character %c is a digit", ch);
        else 
            printf("\nThe character %c is a special character", ch);
    }