//Structure of basic details

# include <stdio.h>

struct people
    {
        char name[30], address[100];
        int dob_d, dob_m, dob_y, phno;
    };

void main()
    {
        struct people p[100];
        int i, size;

        printf("Enter the number of dataset (<100) : ");
        scanf("%d", &size);

        printf("Enter the details :-\n");

        for (i=0; i<size; i++)
            {
                printf("\nPERSON %d\n", i+1);
                printf("Enter name    : ");
                scanf("%s", p[i].name);

                printf("Enter date of birth :- : ");
                printf("\n\tDay   : ");
                scanf("%d", &p[i].dob_d);
                printf("\tMonth : ");
                scanf("%d", &p[i].dob_m);
                printf("\tYear  : ");
                scanf("%d", &p[i].dob_y);
                
                printf("Enter address : ");
                scanf("%s", p[i].address);

                printf("Enter phone number : ");
                scanf("%d", &p[i].phno);
            }


        printf("\nThe details are :-\n");
        for (i=0; i<size; i++)
            {
                printf("\nPERSON %d", i+1);
                printf("\nName    : %s", p[i].name);
                printf("\nDOB     : %d/%d/%d", p[i].dob_d, p[i].dob_m, p[i].dob_y);
                printf("\nAddress : %s", p[i].address);
                printf("\nPh. No. : %d\n", p[i].phno);
            }
    }