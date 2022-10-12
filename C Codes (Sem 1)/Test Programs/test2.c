//Default statement in a switch statement

# include <stdio.h>
# include <string.h>

void main()
    {
        int n; 
        printf("Enter num : ");
        scanf("%d", &n);

        switch(n)
            {
                case 1: printf("Entered number is one");
                        break;
                default : printf("The entered number is other than one, two or three");

                case 2: printf("Entered number is two");
                        break;
                case 3: printf("Entered number is three");
                        break;
                
            }



        
    }