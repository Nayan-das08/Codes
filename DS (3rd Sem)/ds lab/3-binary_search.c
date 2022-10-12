// Binary search

# include <stdio.h>
# include <conio.h>

int main()
  {
    int a[20], n, x, i, ub, lb, midpt, flag=0;

    printf("BINARY SEARCH");

    printf("\n\nEnter the number of elements : ");
    scanf("%d", &n);

    printf("\nEnter the array (%d elements): ", n);
    for (i=0; i<n; i++)
      scanf("%d", &a[i]);

    lb = 0;
    ub = n-1;
    midpt = (ub-lb)/2;

    printf("\nThe array is : \n\t");
    for (i=0; i<n; i++)
      printf(" %d ", a[i]);
    
    printf("\n\nEnter the element to be searched : ");
    scanf("%d", &x);
    
    while (ub > lb)
      {
        midpt = lb + (ub-lb)/2;
        if (x < a[midpt])
          ub = midpt;
        else if (x > a[midpt])
          lb = midpt+1;
        else 
          {
            printf("\nElement found at index %d (position %d)", midpt, midpt+1);
            flag = 1;
            break;
          }
      }
    
    if (flag == 0)
      printf("\nElemnet not found in the array!");
    
    getch();
    return 0;
  }