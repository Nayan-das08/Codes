//Find LCM of two numbers using recursion using function

# include <stdio.h>

int lcm_func(int x, int y, int div)
    {
        static int lcm = 1;        
        
        if (x == 0 || y == 0)
            return 0;

        if (x > 1 || y > 1)
            {
                if (x%div == 0 && y%div == 0)
                    {
                        lcm = lcm * div;
                        x = x/div;
                        y = y/div;
                        return lcm_func(x,y,div);
                    }
                else if (x%div == 0 || y%div == 0)
                    {
                        if (x%div == 0)
                            {
                                lcm = lcm * div;
                                x = x/div;
                                return lcm_func(x,y,div);
                            }
                        if (y%div == 0)
                            {
                                lcm = lcm * div;
                                y = y/div;
                                return lcm_func(x,y,div);
                            }
                    }
                else 
                    {
                        div++;                     
                        return lcm_func(x,y,div);
                    }
            }
        else
            return lcm;
    }

void main()
    {
        int a, b, l;
        printf("LCM OF TWO NUMBERS");
        printf("\n\nEnter the first number  : ");
        scanf("%d", &a);
        printf("Enter the second number : ");
        scanf("%d", &b);
        printf("\nThe HCF of %d and %d = %d", a, b, lcm_func(a,b,2));
    }