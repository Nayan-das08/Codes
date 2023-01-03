// convert infix expression to postfix expression
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

int separate(char infix[], char new[][10])
{
    char temp[10];
    int k=0, count=0;
    strcpy(new[count++], "(");

    for (int i=0; i<strlen(infix); i++)
    {
        if (check(infix[i]) == 1)
        {
            strncat(temp, &infix[i], 1);      
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] ==  '/')
        {
            strcpy(new[count], temp);
            count++;
            strcpy(new[count], (char [2]) {infix[i], '\0'});
            count++;
            strcpy(temp,"");
        }
            
    }
    
    strcpy(new[count], temp);
    count++;
    strcpy(new[count], ")");
    printf("\n\n");
    for (int i=0; i<=count; i++)
    {
        printf("%s\n", new[i]);
    }
    return count;
}

int precedence(char c)
{
    if (c == '-')
        return 1;
    else if (c == '+')
        return 2;
    else if (c == '/')
        return 3;
    else if (c == '*')
        return 4;
    return 0;
}

void convert(char infix[][10], int count)
{
    int top=0;
    char stack[10][5], a, b;
    for (int i=0; i<=count; i++)
    {
        if (strcmp(infix[i],"(") == 0) 
            strcpy(stack[top],infix[i]);

        // numeric
        else if (check(infix[i][0]) == 1)
            printf("%s ", infix[i]);
        
        // operator
        else if (check(infix[i][0]) == 0)
        {
            if (check(stack[top][0]) == 0)
            {
                a = infix[i][0];
                b = stack[top][0];
                // top has higher precedence
                if (precedence(b) >= precedence(a))
                {
                    // pop
                    printf("%s ", stack[top]);
                    top--;
                    // push
                    strcpy(stack[top],infix[i]);
                }
                else 
                    strcpy(stack[top],infix[i]);
            }
        }

        else if (strcmp(infix[i],")") == 0)
        {
            while (strcmp(stack[top], "(") != 0)
            {
                // pop
                printf("%s ", stack[top]);
                top--;
            }
            
        }

        printf("%s \t", infix[i]);
        //for (int k=0; k<=top; k++)
          //  printf("%s", stack[top]);
        printf("\n"); 
    }
}

int main()
{
    char infix[10], infix_sep[10][10];
    int count;

    printf("Enter infix expression : ");
    scanf("%s",infix);
    printf("infix = %s\n", infix);
    
    count = separate(infix,infix_sep);
    convert(infix_sep, count);

    printf("\n");
    return 0;
}
