# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <locale.h>
# include <wchar.h>

int main()
{
    // char *a = (char *) calloc(100, sizeof(char));
    // strcpy(a,"Hello");

    // printf("%d", sizeof(*a));
    // printf("\n%s", a);
    // printf("\n%d", strlen(a));

    // a = (char *) realloc(a, strlen(a));
    // printf("\n\n%d", sizeof(a));
    // printf("\n%s", a);
    // printf("\n%d", strlen(a));

    // char x;
    // for (int i=0; i<512; i++)
    // {
    //     if (i == 7)
    //         printf("%d = bell\n");
    //     else
    //         printf("%d = %c\n", i, i);
    // }
    
    setlocale(LC_CTYPE, "");
    wchar_t a = 0x2190;
    // wprintf(L"symbol : %lc\n", a);
    // printf("symbol : %lc\n", a);
    printf("oi : \U00002190");

}