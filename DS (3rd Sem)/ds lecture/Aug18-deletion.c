//Insertion and its different instances
//18 August 2021

# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

const int size = 10;

int main()
  {
    printf("DELETION IN A 1-D ARRAY");
    int arr[size], n, x, pos, i, j;
    int choice, flag = 0;

    printf("\n\nenter the number of elements : ");
    scanf("%d", &n);

    printf("\nenter the array : ");
    for (i=0; i<n; i++)
      scanf("%d", &arr[i]);

    printf("\nthe array :-\n ");
    for (i=0; i<n; i++)
      printf(" %d ", arr[i]);

    printf("\nn = %d", n);

    printf("\n\nenter the number to be deleted : ");
    scanf("%d", &x);

    for (i=0; i<n; i++)
      if (arr[i] == x)
        {
          printf("\n\nthe element %d is found at index %d", x, i);
          flag = 1;
          break;
        }
      
    if (flag == 0)
      printf("\nelement not found in the array");
    else 
      {
        for (j=i; j<n; j++)   
          arr[j] = arr[j+1];
        // altho, j<n works, it shifts arr[n] -> arr[n-1], which is redundant as arr[n] is garbage
        // and shifting needs to end after last element (arr[n-1]) is shifted 
        // j<n-1 gives the actual number of shifting
        // but in algorithm analysis, it doesn't matter as
        // time complexity is O(n)
        
        n--;

        printf("\n\nafter deletion, the array :-\n");
        for (i=0; i<n; i++)
          printf(" %d ", arr[i]);
        
        printf("\nn = %d", n);

      }

    return 0;
  }