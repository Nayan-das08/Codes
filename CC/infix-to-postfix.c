// convert infix expression to postfix expression
# include <stdio.h>
# include <string.h>

int check(char c)
{
	if (c >= 40 && c <= 41)
		return 0;
    else if (c >= 48 && c <= 57)
        return 1;
    else if (c == '+' || c == '-' || c == '*' || c ==  '/')
        return 2;
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
        else 
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

    for (int i=0; i<=count; i++)
    {
        printf("%s ", new[i]);
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
    int top=-1;
    char stack[10][5], output[20][10], j=0, a, b;

    for (int i=0; i<=count; i++)
    {
    	if (strcmp(infix[i], "(") == 0)
    	{
    		strcpy(stack[++top], infix[i]);
    	}
    	else if (check(infix[i][0]) == 1)
    	{
    		printf("%s ", infix[i]);
    	}
    	else if (check(infix[i][0]) == 2)
    	{
    		a = infix[i][0];
    		b = stack[top][0];
    		if (check(b) == 2)
    		{
    			if (precedence(b) > precedence(a))
    			{
    				// pop
    				printf("%s ", stack[top]);
    				// push
    				strcpy(stack[top], infix[i]);
    			}
    			else
    			{
    				// push
    				strcpy(stack[++top], infix[i]);
    			}
    		}
    		else
    		{
    			// push
    			strcpy(stack[++top], infix[i]);
    		}
    	}
    	else if (strcmp(infix[i], ")") == 0)
    	{
    		while (stack[top][0] != '(')
    		{
    			// pop
    			printf("%s ", stack[top]);
    			top--;
    		}
    	}
    }

}

int main()
{
    char infix[10];// = "(122+14)*15";
    char infix_sep[10][10];
    int  count;

    printf("Enter infix expression : ");
    scanf("%s",infix);
    
    printf("\ninfix   = \t");
    count = separate(infix,infix_sep);
    printf("\npostfix = \t");
    convert(infix_sep, count);

    printf("\n");
    return 0;
}
