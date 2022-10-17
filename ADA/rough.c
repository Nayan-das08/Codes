#include <stdio.h>
#include <stdlib.h>

int min(int a, int b)
{
 if (a<b)
  return a;
 else
  return b;
}

int swap (int *a,  int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int i,j,n, rem_wt, item,W,amt=0;
    int wt[50];
    int val[50];
    int profit[50];
    int used[50];
    float totprof;
    printf("\n Enter the number of items: ");
    scanf("%d",&n); 
    printf("\n Enter the Max Capacity: ");
    scanf("%d",&W); 

    for(i=0;i<n;i++)
    {
        printf("\n Item: %d",i);
        printf("\n Weight: ");
        scanf("%d",&wt[i]);
    }
    printf("\n Enter the value of each item: ");

    for(i=0;i<n;i++)
    {
        printf("\n Item: %d",i);
        printf("\n Value: ");
        scanf("%d",&val[i]);
    }
    
    for (int i=0; i<n; i++)
    	profit[i] = val[i] / wt[i];

    for (int i=0; i<n; i++)
    	printf("%d \t%d \t%d\n", wt[i], val[i], profit[i]);

    // for(i=0;i<n;i++)
    // {
    //     profit[i]=val[i]/wt[i];
    //     printf("\n Profit of Item %d: %d",i,profit[i]);
    // }

    for(j=0;j<n-1;j++) 
    {
      for(i=0;i<n-j-1;i++)   //Comparison
      {
          if(profit[i]<profit[i+1])
          {
              swap(&wt[i],&wt[i+1]); //Swapping
              swap(&val[i],&val[i+1]);
              swap(&profit[i],&profit[i+1]);
          }
      }
    }
    printf("\n Sorted Profit Array via Bubble Sort is: \n");
    for(i=0;i<n;i++)
    {
    	printf("%d \t%d \t%d\n", wt[i], val[i], profit[i]);
	    // printf("%d\t",profit[i]);
    }
     // i=0;

     int p;
     i=0;
    printf("\n\nitems put in knapsack\n");
    while(W>0 && i<n)
    {
        printf("%d \t%d \t%d\n", wt[i], val[i], profit[i]);
        amt=min(wt[i],W);
        // profit[i]=amt;
        W=W-amt;
        p=((float)amt / wt[i])*val[i];
        totprof=(float) totprof + p;
        i=i+1;
    }
    printf("\nTotal Profit = %.2f",totprof);

}


/*
5
60
5
10
20
30
40
30
20
100
90
160
*/