//Binary to decimal conversion

# include <stdio.h>
# include <math.h>

void main()
    {
        long bin, dec=0, temp, flag=0;
        int r, i=0;
        printf("BINARY TO DECIMAL CONVERSION");
        printf("\n\nEnter the binary number : ");
        scanf("%d", &bin);

        temp = bin;
        while (bin != 0)
            {
                r = bin % 10;
                if (r != 1 && r != 0)
                    {
                        flag = 1;
                        break;
                    }
                dec = dec + r*pow(2,i);
                bin = bin / 10;
                i++;
            }
        bin = temp;
        if (flag == 1)
            printf("The number entered is not binary.");
        else
            printf("%ld = %ld", bin, dec);
    }