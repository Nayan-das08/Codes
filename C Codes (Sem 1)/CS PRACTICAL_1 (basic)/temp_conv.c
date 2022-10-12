//Conversion of temperature

# include <stdio.h>

void main()
    {
        float temp, ans;
        int choice;
        printf("TEMPERATURE UNIT COVENRSION");
        printf("\n\nPress 1 for conversion to Celsius");
        printf("\nPress 2 for conversion to Fahrenheit");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        if (choice == 1)
            {
	            printf("\nFahrenheit to Celsius");
	            printf("\nEnter temperature : ");
	            scanf("%f", &temp);
	            ans = (temp-32)*5/9;
	            printf("%0.2f Fahr. = %0.2f Cels.", temp, ans);
            }
        else if (choice == 2)
            {
	            printf("\nCelsius to Fahrenheit");
	            printf("\nEnter temperature : ");
	            scanf("%f", &temp);
	            ans = (9*temp + 160)/5;
	            printf("%0.2f Cels. = %0.2f Fahr.", temp, ans);
            }
        else
            printf("\nInvalid Choice");
  }
