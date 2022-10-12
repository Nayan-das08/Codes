for (k=0; k<=j+1; k++)   // display sorted list
      printf("%d  ", a[k]);
    
    printf("|  ");

    for (k=j+2; k<n; k++)   // display unsorted list
      printf("%d  ", a[k]);
    printf("\n");