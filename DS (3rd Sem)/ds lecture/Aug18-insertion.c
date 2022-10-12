//Insertion and its different instances
//18 August 2021

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

const int size = 10;

void beginning(int arr[], int n)
  {
    int new, j;
    printf("\nenter the new element : ");
    scanf("%d", &new);

    printf("\nthe array :-\n\n");
    for (int i=n-1; i>=0; i--)
      {
        printf("i = %d\t", i);
        for (j=0; j<n; j++)
          printf(" %d ", arr[j]);
        printf("\n");
        arr[i] = arr[i-1];
      }
    
    arr[0] = new;
  }

void at_index(int arr[], int n)
  {
    int new, pos, j;
    printf("\nenter the new element : ");
    scanf("%d", &new);

    printf("\nenter the position : ");
    scanf("%d", &pos);

    printf("\nthe array :-\n\n");
    for (int i=n-1; i>=pos; i--)      //don't shift after shifting arr[pos]
      {
        printf("i = %d\t", i);
        for (j=0; j<n; j++)
          printf(" %d ", arr[j]);
        printf("\n");

        arr[i] = arr[i-1];
      }
    
    arr[pos] = new;
  }

void after_index(int arr[], int n)
  {
    int new, pos, j;
    printf("\nenter the new element : ");
    scanf("%d", &new);

    printf("\nenter the position : ");
    scanf("%d", &pos);

    printf("\nthe array :-\n\n");
    for (int i=n-1; i>pos; i--)       //stop shifting when an element before arr[pos] is reached
      {
        printf("i = %d\t", i);
        for (j=0; j<n; j++)
          printf(" %d ", arr[j]);
        printf("\n");

        arr[i] = arr[i-1];
      }
    
    arr[pos+1] = new;
  }

void before_index(int arr[], int n)
  {
    int new, pos, j;
    printf("\nenter the new element : ");
    scanf("%d", &new);

    printf("\nenter the position : ");
    scanf("%d", &pos);

    printf("\nthe array :-\n\n");
    for (int i=n-1; i>=pos-1; i--)      //stop shifting when an element before arr[pos] is reached
      {
        for (j=0; j<n; j++)
          printf(" %d ", arr[j]);
        printf("\n");

        arr[i] = arr[i-1];
      }
    
    arr[pos-1] = new;
  }

int main()
  {
    printf("INSERTION IN A 1-D ARRAY");
    int arr[size], n, new, pos, i;
    int choice;

    printf("\n\nenter the number of elements : ");
    scanf("%d", &n);

    printf("\nenter the array : ");
    for (i=0; i<n; i++)
      scanf("%d", &arr[i]);

    printf("\nthe array :-\n ");
    for (i=0; i<n; i++)
      printf(" %d ", arr[i]);

    printf("\nn = %d", n);

    if (n == size)
      {
        printf("\n\nOVERFLOW");
        exit(0);
      }
    else 
      n++;
    printf("\n\nWhere do you want to insert new element :-\n");
    printf("Press 1 for insertion at the begining\n");
    printf("Press 2 for insertion at the given index\n");
    printf("Press 3 for insertion after the given index\n");
    printf("Press 4 for insertion before the given index\n");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch(choice)
      {
        case 1: printf("\nINSERTION AT THE BEGINNING");
                beginning(arr, n);
                break;
        case 2: printf("\nINSERTION AT THE THE GIVEN INDEX");
                at_index(arr, n);
                break;
        case 3: printf("\nINSERTION AFTER THE GIVEN INDEX");
                after_index(arr, n);
                break;
        case 4: printf("\nINSERTION BEFORE THE GIVEN INDEX");
                before_index(arr, n);
                break;
        default:printf("\n\nINVALID CHOICE INPUT, EXECUTE THE PROGRAM AGAIN!");
                exit(0);
      }

    printf("\n\nafter insertion, the array :-\n ");
    for (i=0; i<n; i++)
      printf(" %d ", arr[i]);

    printf("\nn = %d", n);
    getch();
    return 0;
  }

