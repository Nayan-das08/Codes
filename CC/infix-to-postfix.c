// convert infix expression to postfix expression
# include <stdio.h>
# include <string.h>

int check(char c)
{
	if (c >= 40 || c <= 41)
		return 0;
    if (c >= 48 && c <= 57)
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
        else //if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] ==  '/')
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
    // printf("\n\n");
    for (int i=0; i<=count; i++)
    {
        // printf("%s ", new[i]);
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
        if (strcmp(infix[i],"(") == 0) 
        {
            // push
            printf("( read\n");
            strcpy(stack[++top],infix[i]);
        }

        // numeric
        else if (check(infix[i][0]) == 1)
        {
            printf("%s \n", infix[i]);
        }
        
        // operator
        else if (check(infix[i][0]) == 2)
        {
        	printf("num read");

        	// stack[top] is an operator as well
            if (check(stack[top][0]) == 2)
            {
                a = infix[i][0];
                b = stack[top][0];
                // stack[top] has higher precedence
                if (precedence(b) >= precedence(a))
                {
                    // pop
                    printf("%s \n", stack[top]);
                    // strcpy(output[j++], stack[top]);
 		        	// strcpy(output[j++], (char [2]) {' ', '\0'});
                    // top--;
                    // push
                    strcpy(stack[top],infix[i]);
                }
                else
	            {
	                strcpy(stack[++top],infix[i]);
	            }
            }
            else
            {
                strcpy(stack[++top],infix[i]);
            } 
        }

        else if (strcmp(infix[i],")") == 0)
        {
            while (strcmp(stack[top], "(") != 0)
            {
                // pop
                printf("%s \n", stack[top--]);
            }
            
        }

        // printf("%s \t", infix[i]);
        // for (int k=0; k<=top; k++)
        //    printf("%s", stack[top]);
       	// printf("\t");
        // for (int k=0; k<j; j++)
        //    printf("%s", output[k]);
        // printf("\n"); 
    }
    // for (int k=0; k<=count; k++)
    //     printf("%s\n", infix[k]);

}

int main()
{
    char infix[10], infix_sep[10][10];
    int count;

    printf("Enter infix expression : ");
    scanf("%s",infix);
    printf("infix = %s\n", infix);
    
    count = separate(infix,infix_sep);
    printf("\n");
    convert(infix_sep, count);

    // for (int k=0; k<=count; k++)
    //     printf("%s\n", infix_sep[k]);
    
    // printf("\n");
    return 0;
}
