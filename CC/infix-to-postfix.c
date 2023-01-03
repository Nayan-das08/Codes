# include <stdio.h>
# include <string.h>

int check(char c)
{
    if (c >= 48 && c <= 57)
        return 1;
    else if (c == '+' || c == '-' || c == '*' || c ==  '/')
        return 0;
    else
        return -1;
}

void separate(char infix[], char new[][10])
{
    char temp[10];
    int k=0, count=0;
    for (int i=0; i<strlen(infix); i++)
    {
        if (check(infix[i]) == 1)
        {
            strncat(temp, &infix[i], 1);      
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] ==  '/')
        {
            //printf("%c is operator\n", infix[i]);
            strcpy(new[count], temp);
            count++;
            strcpy(new[count], (char [2]) {infix[i], '\0'});
            //new[count][0] = infix[i];
            //strncat(new[count],"\0",1);
            count++;
            strcpy(temp,"");
        }
        printf("\n%c \ttemp = %s \tcount = %d",infix[i],temp,count);
            
    }
    
    strcpy(new[count], temp);
    count++;
    printf("\n\n");
    for (int i=0; i<count; i++)
    {
        printf("%s\n", new[i]);
    }

    printf("\n\ncount = %d", count);
}

int main()
{
    char infix[10], new[10][10];
    printf("Enter infix expression : ");
    scanf("%s",infix);
    printf("infix = %s\n", infix);
    
    separate(infix,new);

    printf("\n");
    return 0;
}
