//Find LCM of two numbers

# include <stdio.h>

void main()
    {
        int a, b, i=2, factors[50], pos=0, lcm=1, temp_1, temp_2;
        printf("LCM OF TWO NUMBERS");
        printf("\n\nEnter the first number  : ");
        scanf("%d", &a);
        printf("Enter the second number : ");
        scanf("%d", &b);
        temp_1 = a;
        temp_2 = b;
        i = 2;
        
        while (a != 1 || b != 1)
            {
                if (a%i == 0 && b%i == 0)
                    {
                        a = a / i;
                        b = b / i;
                        factors[pos++] = i;
                    }                
                else if (a%i == 0 || b%i == 0)
                    {
                        if (a%i == 0)
                            {
                                a = a / i;
                                factors[pos++] = i;
                            }
                        if (b%i == 0)        
                            {
                                b = b / i;
                                factors[pos++] = i;
                            }
                    }
                else
                    i++;
            }
        a = temp_1;
        b = temp_2;
        
        for (i=0; i<pos; i++)
            {
                lcm = lcm * factors[i];
            }
        printf("\nLCM OF %d and %d = %d", a, b, lcm);
    }
        /*
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        while (a != 1 || b != 1)
            {
                if (a%i == 0)  //|| b%i == 0)
                    {
                        a = a / i;
                        //b = b / i;
                        factors[pos++] = i;
                    }
                else
                    i++;

                if (b%j == 0)
                    {
                        b = b / j;
                        factors[pos++] = j;
                    }
                else
                    j++;
            }
        
        for (i=0; i<pos; i++)
            {
                lcm = lcm * factors[i];
            }
        printf("\nLCM of %d and %d = %d", lcm);
    }*/