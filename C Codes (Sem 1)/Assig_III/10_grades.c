//Input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following
//Percentage >= 90% : Grade A 
//Percentage >= 80% : Grade B 
//Percentage >= 70% : Grade C 
//Percentage >= 60% : Grade D 
//Percentage >= 40% : Grade E
//Percentage <  40% : Grade F

# include <stdio.h>

void main()
    {
        int marks[5], i, n;
        float perc;
        printf("PERCENTAGE AND GRADE CALCULATOR");
        printf("\n\nEnter the maximum marks : ");
        scanf("%d", &n);

        for (i=0; i<5; i++)
            {
                printf("Enter marks in subject %d : ", i+1);
                scanf("%d", &marks[i]);
                perc += marks[i];   
            }
        
        perc = (perc*100.00) / (n*5);
        printf("\nPercentage : %0.2f%%", perc);

        if (perc >= 90)
            printf("\nGrade : A");
        else if (perc >= 80)
            printf("\nGrade : B");
        else if (perc >= 70)
            printf("\nGrade : C");
        else if (perc >= 60)
            printf("\nGrade : D");
        else if (perc >= 40)
            printf("\nGrade : E");
        else
            printf("\nGrade : F");
    }