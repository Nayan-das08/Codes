//To compare two given strings.

# include <stdio.h>
# include <string.h>

void main()
    {
        char a[50], b[50];
        int i=0, j=0, found=0, len_a, len_b, res;
        printf("COMPARISON OF TWO STRINGS LEXOGRAPHICALLY");
        printf("\n\nEnter the first string  : ");
        gets(a);
        printf("Enter the second string : ");
        gets(b);

        len_a = strlen(a);
        len_b = strlen(b);

        while (i<len_a && j<len_b)
            {
                if (a[i] > b[i])
                    {
                        res = 1;
                        found = 1;
                        break;
                    }
                else if (a[i] < b[i])
                    {
                        res = -1;
                        found = 1;
                        break;
                    }
                i++;
            }
        
        if (found == 0)
            {
                if (len_a == len_b)
                    res = 0;
                else if(len_a > len_b)
                    res = 1;
                else 
                    res = -1;
            }

        printf("On comparison of strings lexographically :-\n\t");
        if (res == 0)
            printf("'%s' = '%s'", a, b);
        else if (res == 1)
            printf("'%s' > '%s'", a, b);
        else if (res == -1)
            printf("'%s' < '%s'", a, b);
    }