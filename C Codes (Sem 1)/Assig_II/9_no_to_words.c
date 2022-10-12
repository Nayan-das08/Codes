//Enter a number and print it in words

# include <stdio.h>
# include <stdlib.h>

void thousand(int a)
    {
        int j;
        char str[][20] = { "", "one thousand", "two thousand", "three thousand", "four thousand", "five thousand",
                          "six thousand", "seven thousand", "eight thousand", "nine thousand"};
        for (j=0; j<=10; j++)
            {
                if (j == a)
                    printf("%s ", str[j]);
            }
    }

void hundred(int a)
    {
        int j;
        char str[][20] = { "", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred",
                          "six hundred", "seven hundred", "eight hundred", "nine hundred"};
        for (j=0; j<=10; j++)
            {
                if (j == a)
                    printf("%s ", str[j]);
            }
    }

void ten_1(int a)
    {
        int j;
        char str_1[][10] = { "", "", "twenty", "thirty", "forty", "fifty",
                          "sixty", "seventy", "eighty", "ninety"};
        char str_2[][10] = { "", "eleven", "twelve", "thirteen", "forteen", "fifteen",
                          "sixteen", "seventeen", "eighteen", "nineteen"};
        for (j=0; j<=10; j++)
            {
                if (j == a)
                    if (a == 1)
                        printf("%s ", str_2[j]);
                    else
                        printf("%s ", str_1[j]);
            }
    }

void one(int a)
    {
        int j;
        char str[][6] = { "", "one", "two", "three", "four", "five",
                          "six", "seven", "eight", "nine"};
        for (j=0; j<=10; j++)
            {
                if (j == a)
                    printf("%s ", str[j]);
            }
    }

void main()
    {
        int n, arr[20], temp, r, i=1, dig=1;
        printf("NUMBER TO WORDS");
        printf("\n\nEnter the number less than 9999 : ");
        scanf("%d", &n);
        temp = n;

        while (n != 0)
            {
                r = n % 10;
                arr[i++] = r;
                n = n / 10;
            }
        n = temp;
        dig = i-1;

        printf("%d in words is :-\n", n);
        for (i=dig; i>=1; i--)
            {
                switch (i)
                    {
                        case 4 : thousand(arr[i]);
                                 break;
                        case 3 : hundred(arr[i]);
                                 break;
                        case 2 : ten_1(arr[i]);
                                 if (arr[i] == 1)
                                    exit(0);
                                 break;
                        case 1 : one(arr[i]);
                                 break;
                        default : printf("\nNumber greater than 9999 can't be processed in this version. Next version coming soon!");
                    }
            }
    }