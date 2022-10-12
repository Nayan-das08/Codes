//Finding particular word in a string

# include <stdio.h>
# include <string.h>

int check(char *w, char *target)
    {
        if (strcmpi(w, target) == 0)
            return 1;
        else
            return 0;
    }

void main()
    {
        char str[200], copy[10], target[10];
        int i, j, k, pos, count=0, w=0;
        printf("FREQUENCY OF PARTICULAR CHARACTERS IN A STRING");        
        printf("\n\nEnter the string : ");
        gets(str);
        printf("Enter the target word (case sensitive) : ");
        gets(target);

        pos = 0;
        for (i=0; i<=strlen(str); i++)
            {
                if (str[i] == ' ' || str[i] == '\0')
                    {
                        for (j=pos, k=0; j<i; j++, k++)
                            {
                                copy[k] = str[j];
                            }
                        copy[k] = '\0';
                        pos = i+1;
                        if (check(copy, target) == 1)
                            count++;
                    }
            }

        printf("The frequency of '%s' in the string = %d", target, count);
    }