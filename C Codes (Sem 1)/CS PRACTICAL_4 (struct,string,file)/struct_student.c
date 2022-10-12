//Structure of student info

# include <stdio.h>

struct student
    {
        char name[30];
        int rno, marks;
    };

void main()
    {
        struct student s[30];
        int i, sum=0, avg, size;

        printf("Enter the number of dataset (<30) : ");
        scanf("%d", &size);

        printf("Enter the details of the students :-\n");

        for (i=0; i<size; i++)
            {
                printf("\nSTUDENT %d\n", i+1);
                printf("Enter the roll no : ");
                scanf("%d", &s[i].rno);
                printf("Enter the name    : ");
                scanf("%s", s[i].name);
                printf("Enter the marks   : ");
                scanf("%d", &s[i].marks);
            }


        printf("\nThe details are :-\n");
        for (i=0; i<size; i++)
            {
                printf("\nSTUDENT %d", i+1);
                printf("\nRoll no : %d", s[i].rno);
                printf("\nName    : %s", s[i].name);
                printf("\nMarks   : %d\n", s[i].marks);
                sum = sum + s[i].marks;
            }

        avg = sum/size;
        
        printf("\n\nThe Average marks : %d", avg);
    }