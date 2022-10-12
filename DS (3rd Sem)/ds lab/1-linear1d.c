//linear search on 1d array

# include <stdio.h>

int l_search(int arr[], int x)
  {
    int i;
    for (i=0; i<7; i++)
      if (arr[i] == x)
        return i;
    return -1;
  }

void main()
  {
    //clrscr(); 
    int arr[] = {1,5,8,4,3,9,11}, pos, target;
    printf("Enter the target value : ");
    scanf("%d", &target);

    printf("\nIn the array :-\n\t");
    for (int i=0; i<7; i++)
        printf("%d  ", arr[i]);
    pos = l_search(arr, target);
    if (pos == -1)
      printf("\nthe element %d is not present in the array", target);
      //printf("%d", pos);
    else  
      printf("\nthe element %d is at position %d", target, pos);
      //printf("%d", pos);
    //getch();
  }