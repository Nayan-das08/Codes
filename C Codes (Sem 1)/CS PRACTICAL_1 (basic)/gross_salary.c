//Calculating gross salary from basic salary

# include <stdio.h>

void main()
    {
        long int basic_sal, da, hra, gross_sal;
        printf("GROSS SALARY CALCULATOR");
        printf("\n\nEnter basic salary : ");
        scanf("%d", &basic_sal);
        da  = basic_sal*0.40;
        hra = basic_sal*0.20;
        gross_sal = basic_sal + da + hra;
        printf("Gross salary : %d", gross_sal);
    }