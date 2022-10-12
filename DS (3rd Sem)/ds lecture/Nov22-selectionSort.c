// bubble sort

# include <stdio.h>

void swap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

void selectionSort(int a[])
{
  int i, j, k, n=10;
  int min, pos;
  pos = 0;
  min = a[pos];
  for (i=1; i<n; i++)
  {
    for (j=i; j<n; j++)
    {
      if (a[j] < min)
      {
        pos = j;
        min = a[pos];
        break;
      }
    }
    
  }
}

int main()
{
  int arr[10] = {5,7,2,4,10,9,8,1,6,3};
  selectionSort(arr);
  

  return 0;
}