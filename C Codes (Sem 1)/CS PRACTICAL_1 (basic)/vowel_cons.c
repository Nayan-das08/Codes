//To check whether a character is alphabet or digit

#include <stdio.h>

void main()
    {
        char ch;
        printf("CHECKING FOR VOWEL/CONSONANT");
        printf("\n\nEnter a character : ");
        scanf("%c", &ch);

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))    // check for alphabets
            {
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                    printf("\nThe character %c is a vowel", ch);
                else                                       // other alphabets would be consonants
                    printf("\nThe character %c is a consonant", ch);
            }
        else
            printf("\nThe character %c is not an alphabet", ch);
    }