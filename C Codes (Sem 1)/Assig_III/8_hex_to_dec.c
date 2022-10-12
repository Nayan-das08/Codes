//Convert Hexadecimal to Decimal number system

# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <math.h>
# include <stdlib.h>

void main()
    {
        char hex_ch[20];
        int hex_n[20], i, j=0;
        long dec;
        printf("HEXADECIMAL TO DECIMAL CONVERSION");
        printf("\n\nEnter the Hex Number (case insensitive): ");
        scanf("%s", &hex_ch);
        
        for (i=0; i<strlen(hex_ch); i++)
            {               
                if (hex_ch[i] == 'A' || hex_ch[i] == 'a')
                    hex_n[i] = 10;
                else if (hex_ch[i] == 'B' || hex_ch[i] == 'b')
                    hex_n[i] = 11;
                else if (hex_ch[i] == 'C' || hex_ch[i] == 'c')
                    hex_n[i] = 12;
                else if (hex_ch[i] == 'D' || hex_ch[i] == 'd')
                    hex_n[i] = 13;
                else if (hex_ch[i] == 'E' || hex_ch[i] == 'e')
                    hex_n[i] = 14;
                else if (hex_ch[i] == 'F' || hex_ch[i] == 'f')
                    hex_n[i] = 15;
                else
                    hex_n[i] = hex_ch[i] - 48;                   
            }


        for (i=strlen(hex_ch)-1; i>=0; i--)
            {
                dec = dec + hex_n[i]*pow(16,j);
                j++;
            }

        printf("decimal equivalent = %d", dec);


    }