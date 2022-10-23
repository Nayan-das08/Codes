# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main()
{
    char *a = (char *) calloc(100, sizeof(char));
    strcpy(a,"Hello");

    printf("%d", sizeof(*a));
    printf("\n%s", a);
    printf("\n%d", strlen(a));

    a = (char *) realloc(a, strlen(a));
    printf("\n\n%d", sizeof(a));
    printf("\n%s", a);
    printf("\n%d", strlen(a));
    
}