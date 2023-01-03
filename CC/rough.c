# include <stdio.h>
# include <string.h>

int main()
{
    char array[10][10];
    char c = 'p';

    strcpy(array[0], (char [2]) {c, '\0'});

    printf("array : %s", array[0]);

    printf("\n");
    return 0;
}
