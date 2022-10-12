//Finding particular character in a string

# include <stdio.h>
# include <string.h>

void main()
    {
        char str[50], target;
        int i, count=0;
        printf("FREQUENCY OF PARTICULAR CHARACTERS IN A STRING");
        printf("\n\nEnter the string  : ");
        gets(str);
        printf("Enter the target character : ");
        scanf("%c", &target);

        for (i=0; i<strlen(str); i++)
            {
                if (str[i] == target)
                    count++;
            }
        printf("The frequency of %c in the string = %d", target, count);

    }