// bubble sort

# include <stdio.h>

void insertionSort(int a[])
{
  int i, j, k, l, temp, n=10;
  for (i=1; i<n; i++)
  {
    temp = a[i];    // first element in unsorted list
    j = i-1;        // last element in sorted list
    l = j;
    while (temp <= a[j])
    {
      a[j+1] = a[j];
      j--;
    }
    // at the end of the loop
    // where temp > a[j]
    a[j+1] = temp;

    for (k=0; k<=l+1; k++)   // display sorted list
      printf("%d  ", a[k]);
    
    printf("|  ");

    for (k=l+2; k<n; k++)   // display unsorted list
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
  insertionSort(arr);
  
  /*int a,b;
  a=10;
  b=20;
  printf("%d and %d", a, b);
  swap(&a,&b);
  printf("\n%d and %d", a, b);*/

  return 0;
}