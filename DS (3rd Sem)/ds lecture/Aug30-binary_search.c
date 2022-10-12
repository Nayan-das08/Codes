// Binary search

# include <stdio.h>

void main()
  {
    int a[20], n, x, i, ub, lb, midpt;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("\nenter the array (%d elements): ", n);
    for (i=0; i<n; i++)
      scanf("%d", &a[i]);

    lb = 0;
    ub = n-1;
    midpt = (ub-lb)/2;

    printf("the array is : ");
    for (i=0; i<n; i++)
      printf(" %d ", a[i]);
    
    printf("\n\nenter the number to be searched : ");
    scanf("%d", &x);
    
    while (ub > lb)
      {
        midpt = lb + (ub-lb)/2;
        printf("\na[lb] = a[%d] = %d", lb, a[lb]);
        printf("\na[ub] = a[%d] = %d", ub, a[ub]);
        printf("\na[midpt] = a[%d] = %d\n", midpt, a[midpt]);
        
        if (x < a[midpt])
          ub = midpt;
        else if (x > a[midpt])
          lb = midpt+1;
        else 
          {
            printf("\nelement found at index %d (position %d)", midpt, midpt+1);
            break;
          }
      }
    
    
  }