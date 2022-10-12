//Decimal to binary conversion

# include <stdio.h>
# include <math.h>

void main()
    {
        long bin=0, dec, temp, m;
        int r, i=1;
        printf("DECIMAL TO BINARY CONVERSION");
        printf("\n\nEnter the decimal number : ");
        scanf("%d", &dec);

        temp = dec;
        while (dec != 0)
            {
                r = dec % 2;
                bin = bin + i*r;
                dec = dec / 2;
                i *= 10;
            }
        dec = temp;


        printf("\n%ld = %ld", dec, bin);
    }