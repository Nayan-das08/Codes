# include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the no of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
            printf("  "); //3 spaces for proper spacing
      
        for(j=1;j<=i;j++)
            printf("%d ",j);
      
        for(j=(i-1);j>=1;j--) //j-(i-1)  and j>-1 (equal sign in place of minus)
            printf("%d ",j);
        printf("\n");
    }
    
    return 0;
}