//Deletion in 1-D array

# include <stdio.h>
# include <conio.h>

const int size = 10;

int main()
  {
    printf("DELETION IN A 1-D ARRAY");
    int arr[size], n, x, pos, i, j;
    int choice, flag = 0;

    printf("\n\nEnter the number of elements : ");
    scanf("%d", &n);

    printf("\nEnter the array : ");
    for (i=0; i<n; i++)
      scanf("%d", &arr[i]);

    printf("\nThe array :-\n ");
    for (i=0; i<n; i++)
      printf(" %d ", arr[i]);

    printf("\n\nenter the number to be deleted : ");
    scanf("%d", &x);

    for (i=0; i<n; i++)
      if (arr[i] == x)
        {
          printf("\n\nthe Element %d is found at index %d", x, i);
          flag = 1;
          break;
        }
      
    if (flag == 0)
      printf("\nElement not found in the array!");
    else 
      {
        for (j=i; j<n; j++)   
          arr[j] = arr[j+1];
        
        n--;

        printf("\n\nAfter deletion, the array :-\n");
        for (i=0; i<n; i++)
          printf(" %d ", arr[i]);        
      }

    getch();
    return 0;
  }