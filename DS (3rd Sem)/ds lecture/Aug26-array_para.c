// array as parameters

# include <stdio.h>

void func(int *arr, int n)
  {
    for (int i=0; i<n; i++)
      arr[i] *= 2;
  }

void main()
  {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    printf("array before func() : ");
    for (int j=0; j<n; j++)
      printf(" %d ", arr[j]);
    
    printf("\n\n");
    func(arr,n);

    printf("array after func() : ");
    for (int j=0; j<n; j++)
      printf(" %d ", arr[j]);
  }