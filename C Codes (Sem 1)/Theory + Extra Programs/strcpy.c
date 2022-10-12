# include <stdio.h>

void change(char *x, char *y)
    {
        while (*x != '\0')
            {
                *x = *y;
                x++;
                y++;
            }
        printf("\nThe string after :-\n");
        printf("%s\n", x);
        printf("%s\n", y);
    }

void main()
    {
        char str_1[20], str_2[20];
        printf("Enter the first string  : ");
        gets(str_1);
        printf("Enter the second string : ");
        gets(str_2);

        printf("\nThe strings before :-\n");
        printf("%s\n", str_1);
        printf("%s\n", str_2);

        change(str_1, str_2);

        /*printf("The string after :-\n");
        printf("%s\n", str_1);
        printf("%s\n", str_2);*/
    }


