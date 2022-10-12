# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void show(char name[])
{
    printf("%s", name);
}

int main()
{
    // printf("%lc", (wint_t)236);

    show("Π");
    return 0;
}

