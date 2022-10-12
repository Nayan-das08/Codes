#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    FILE* ptr;
    char inp[255];
    ptr = fopen("Sample.txt", "r");
    fscanf(ptr, "%s", inp);
    printf("%s",inp);

    for(int i=0; i<inp; i++)
    {
        pid_t pid = fork();

        if(pid == 0)
        {
            printf("Child => PPID: %d PID: %d\n", getppid(), getpid());
            exit(0);
        }

        else if(pid > 0)
        {
            printf("Parent => PID: %d\n", getpid());
            printf("Waiting for child process to finish.\n");
            wait(NULL);
            printf("Child process finished.\n");
        }

        else
        {
            printf("Unable to create child process.\n");
        }
    }

    return 0;
}
