// Write a program to transpose a matrix

# include <stdio.h>

void main() {
  int a[10][10];
  int i, j, r, c;

  printf("TRANSPOSE OF A MATRIX\n\n");
  
  printf("Enter the no. of rows : ");
  scanf("%d", &r);

  printf("Enter the no. of columns : ");
  scanf("%d", &c);

  printf("\nEnter the matrix :-\n");
  for (i=0; i<r; i++)
    for (j=0; j<c; j++) {
      printf("  a[%d][%d] : ", i, j);
      scanf("%d", &a[i][j]);
    }

  printf("\nThe matrix is :-\n  ");
  for (i=0; i<r; i++) {
    for (j=0; j<c; j++) 
      printf("  %d", a[i][j]);
    printf("\n  ");
  }

  printf("\n\nThe transpose of the matrix is :-\n  ");
  for (i=0; i<c; i++) {
    for (j=0; j<r; j++) 
      printf("  %d", a[j][i]);
    printf("\n  ");
  }

}