// bubble sort

# include <stdio.h>

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void bubbleSort(int a[])
{
  int i, j, k, n=10;
  for (i=0; i<n; i++)       // comparing (inner) loop is repeated for each element
  {
    for (j=0; j<n-i; j++)   // n-i # of comparisons one element gets
    {                       // in sorted position at the end of each iteration
      if (a[j] > a[j+1])
        swap(&a[j], &a[j+1]);
    }
    for (k=0; k<n; k++)
      printf("%d  ", a[k]);
    printf("\n");
  }
  printf("\nSorted array : ");
  for (k=0; k<n; k++)
    printf("%d  ", a[k]);
}

int main()
{
  int arr[10] = {5,7,2,4,10,9,8,1,6,3};
  bubbleSort(arr);
  

  return 0;
}