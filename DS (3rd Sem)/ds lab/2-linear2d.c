//linear search on 1d array

# include <stdio.h>

int l_search(int arr[3][3], int x, int *pos_1, int *pos_2)
  {
    int i, j;
    for (i=0; i<3; i++)
      for (j=0; j<3; j++)
        if (arr[i][j] == x)
          {
            (*pos_1) = i;
            (*pos_2) = j;
            return 1;
          }
    return -1;
  }

void main()
  {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int pos_1, pos_2, target, flag=1, i, j;
    printf("Enter the target value : ");
    scanf("%d", &target);
    
    printf("\nIn the array :-\n");
    for (i=0; i<3; i++)
        {
            for (j=0; j<3; j++)
                printf("\t%d", arr[i][j]);
            printf("\n");
        }
        
    flag = l_search(arr, target, &pos_1, &pos_2);
    if (flag == -1)
      printf("\nthe element %d is not present in the array", target);
    else  
      printf("\nthe element %d is at position %d-%d", target, pos_1, pos_2);
  }