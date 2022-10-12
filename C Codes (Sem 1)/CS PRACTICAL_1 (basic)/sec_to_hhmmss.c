//Converting seconds to HH:MM:SS format

#include <stdio.h>

void main()
    {
        int time, hh, mm, ss;
        printf("SECONDS TO HH:MM:SS CONVERSION");
        printf("\n\nEnter no. of seconds to be converted : ");
        scanf("%d", &time);

        ss = time % 60;
        time = time - ss;
        time = time / 60;
        mm = time % 60;
        time = time / 60;
        hh = time % 60;
        printf("\nThe converted time is :-");
        printf("\nHH:MM:SS = %d:%d:%d", hh, mm, ss);
    }