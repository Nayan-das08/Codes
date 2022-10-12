//Frequency of characters in a string

# include <stdio.h>
# include <ctype.h>
# include <string.h>

void main()
    {
        char str[30], ch, ch_2;
        int lower[26] = {0}, upper[26] = {0}, other[35] = {0};
        int i, j, count;
        printf("FREQUENCY OF CHARACTERS IN A STRING");
        printf("\n\nEnter the string : ");
        gets(str);

        for (i=0; i<strlen(str); i++)
            {
                ch = str[i];
                
                if (ch >=97 && ch <=122)
                    for (j=97; j<=122; j++)
                        {
                            ch_2 = j;
                            if (ch_2 == ch)
                                {
                                    lower[j-97]++;
                                }
                        }
                
                else if (ch >=65 && ch <=90)
                    for (j=65; j<=90; j++)
                        {
                            ch_2 = j;
                            if (ch_2 == ch)
                                {
                                    upper[j-65]++;
                                }
                        }
                
                else if (ch >=32 && ch <=64)
                    for (j=32; j<=64; j++)
                        {
                            ch_2 = j;
                            if (ch_2 == ch)
                                {
                                    other[j-32]++;
                                }
                        }
            }


        printf("\ncharacter  |  frequency\n");
        printf("----------------------");
        for (i=0; i<26; i++)
            if (lower[i] != 0)
                printf("\n    %c      |     %d", 97+i, lower[i]);

        for (i=0; i<26; i++)
            if (upper[i] != 0)
                printf("\n    %c      |     %d", 65+i, upper[i]);

        for (i=0; i<33; i++)
            if (other[i] != 0)
                if (i == 0)
                    printf("\n  space    |     %d", other[i]);
                else
                    printf("\n    %c      |     %d", 32+i, other[i]);   
    
    }