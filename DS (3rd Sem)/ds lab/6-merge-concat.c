// Write a program to merge 2 arrays into one array and display 
// in other words, concatenation

# include <stdio.h>
# include <conio.h>
# define a_size 10
# define b_size 10
# define c_size a_size+b_size

int main() {
  int a[a_size], b[b_size], c[c_size];
  int i, j, k, n, m;

  printf("MERGING TWO ARRAYS INTO ONE ARRAY\n\n");
  
  printf("Enter the limit of array a[] : ");
  scanf("%d", &n);

  printf("Enter array a[] : ");
  for (i=0; i<n; i++)
    scanf("%d", &a[i]);
  
  printf("\nEnter the limit of array b[] : ");
  scanf("%d", &m);

  printf("Enter array b[] : ");
  for (j=0; j<m; j++)
    scanf("%d", &b[j]);

  printf("\n  a[] : ");
  for (i=0; i<n; i++)
    printf("  %d", a[i]);

  printf("\n\n  b[] : ");
  for (i=0; i<m; i++)
    printf("  %d", b[i]);
  
  // copying values from a[] to c[]
  for (i=0; i<n; i++)
    c[i] = a[i];

  // copying values from b[] to c[] continuing 
  // from the last accessed location of c[]
  for (j=0; j<m; j++)
    c[i+j] = b[j];

  printf("\n\nAfter merging values from a[] and b[] to c[] :-");

  printf("\n  c[] : ");
  for (i=0; i<(n+m); i++)
    printf("  %d", c[i]);
  getch();
  return 0;
}