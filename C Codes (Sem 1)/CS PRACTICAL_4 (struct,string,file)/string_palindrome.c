//Check if the entered string is a palindrome or not

# include <stdio.h>
# include <string.h>

void main()
    {
        char str[20], copy[20];
        printf("CHECKING FOR STRING PALINDROME");
        printf("\n\nEnter the string : ");
        gets(str);
        strcpy(copy, str);
        if (strcmpi(copy, strrev(str)) == 0)
            {
                printf("The entered string %s is a palindrome", copy);
            }
        else
            {
                printf("The entered string '%s' is not a palindrome", copy);
            }
    }