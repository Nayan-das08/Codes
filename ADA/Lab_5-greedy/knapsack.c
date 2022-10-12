// knapsack_2c

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int n;

struct item
{
	int weight, value, P;
};

int min(int a, int b)
{
	if (a<b)
		return a;
	else
		return b;
}

void swap(struct item arr[], int i, int j)
{
	struct item temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(struct item arr[], int p, int r)
{
	int pivot = arr[r].P; // setting last element as pivot
	int i=p;
	for (int j=p; j<r; j++)
		if (arr[j].P >= pivot)
			swap(arr, i++, j);
	swap(arr, i, r); 
	return i;
}

void quick(struct item arr[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = partition(arr, p, r);
		quick(arr, p, q-1);
		quick(arr, q+1, r);
	}
}

float Greedy(struct item I[], int W)
{
	// getting profit per unit weight into I[i].P
	for (int i=0; i<n; i++)
		I[i].P = I[i].value / I[i].weight;

	// sort
	quick(I,0,n-1);
	
	// show Items
	printf("List of items :-\n\n");
	printf("    \tWEIGHT \tVALUE \tPROFIT\n");
	for (int i=0; i<n; i++)
		printf("%d \t%d \t%d \t%d\n", i, I[i].weight, I[i].value, I[i].P);
	
	// --------------------------------------------------------

	int 	amount = 0;		// amount to be put in knapsack
	int 	j;				// index variable
	int 	profit;		    // profit for each insertion into the knapsack
	int 	*knapsack = (int *) calloc(n,sizeof(int));
	float 	total_profit = 0;

	printf("\n\n");
	printf("Items put in knapsack :-\n\n");
	printf("    \tI.WT \tMIN \tI.VAL \tPROFIT \tREM\n");

	j=0;
	while (W > 0 && j < n)
	{
		// get min value among item weight and remaining weight
		// if (item weight < remaining weight): put item in knapsack
			// profit is the value of the item

		// if (remaining weight < item weight): put remaining weight's worth of item in knapsack
			// profit is (remaining weight) / (item weight) * (item value)
		amount = min(I[j].weight, W);

		//put amount in knapsack
		knapsack[j] = amount;

		// update the knapsack weight value
		W -= amount;

		// general profit
		profit = ((float)amount / I[j].weight )*I[j].value;
		printf("%d \t%d \t%d \t%d \t%d \t%d\n",j , I[j].weight, amount, I[j].value, profit, W);
		j++;
		total_profit += profit;
	}

	free(knapsack);
	return total_profit;
}

int main(int argc, char *argv[])
{
	int W=10; 
	float total_profit;
	char choice;
	
	printf("Enter weight of knapsack : ");
	scanf("%d", &W);
	printf("Enter number of items    : ");
	scanf("%d", &n);	
	
	struct item *I = (struct item*) calloc(n,sizeof(struct item));
	
	for (int i=0; i<n; i++)
	{
		printf("\nitem %d:\n", i);
		printf("  weight : ");
		scanf("%d", &I[i].weight);
		printf("  value  : ");
		scanf("%d", &I[i].value);
	}

	printf("Capacity of knapsack : %d\n", W);
	printf("Number of items      : %d\n\n", n);
	
	total_profit = Greedy(I,W);
	printf("\n\nTotal Profit = %.2f",total_profit);

	free(I);
	return 0;
}

/*
60
5
5
30
10
20
20
100
30
90
40
160
*/

