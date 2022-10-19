# include <stdio.h>
# include <stdlib.h>

struct task
{
	int id, d, p;
};

int n;

// quick sort
void swap(struct task arr[], int i, int j)
{
	struct task temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(struct task arr[], int p, int r)
{
	int pivot = arr[r].p; // setting last element as pivot
	int i=p;
	for (int j=p; j<r; j++)
		if (arr[j].p >= pivot)
			swap(arr, i++, j);
	swap(arr, i, r); 
	return i;
}

void quick(struct task arr[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = partition(arr, p, r);
		quick(arr, p, q-1);
		quick(arr, q+1, r);
	}
}

int get_max_deadline(struct task tasks[])
{
	int max = 0;
	for (int i=0; i<n; i++)
	{
		if (tasks[i].d > max)
			max = tasks[i].d;
	}
	return max;
}

int main()
{
	// struct task tasks[] = {
	// {1,  4,  70},
	// {2,  2,  60},
	// {3,  5,  50},
	// {4,  3,  40},
	// {5,  1,  30},
	// {6,  4,  20},
	// {7,  6,  10}
	// };
	// n = sizeof(tasks)/sizeof(struct task);

	printf("Enter number of tasks : ");
	scanf("%d", &n);
	struct task *tasks = (struct task *) calloc(n,sizeof(struct task));

	for (int i=0; i<n; i++)
	{
		printf("\nTask %d:\n", i+1);
		tasks[i].id = i+1;
		printf("  deadline : ");
		scanf("%d", &tasks[i].d);
		printf("  penalty  : ");
		scanf("%d", &tasks[i].p);
	}
	// printf("")

	quick(tasks,0,n-1);

	printf("\n\nID\tDeadline\tProfit\n");
	for (int i=0; i<n; i++)
		printf("%2d\t  %2d\t\t  %2d\n", tasks[i].id, tasks[i].d, tasks[i].p);

	int m = get_max_deadline(tasks);
	struct task *scheduled = (struct task *) calloc(m,sizeof(struct task));
	struct task *not_scheduled = (struct task *) calloc(n-m,sizeof(struct task));
	int d, flag;

	printf("\n");
	int k=0;
	for (int i=0; i<n; i++)
	{
		d = tasks[i].d;
		flag=0;
		for (int j=d; (j-1)>=0; j--)
		{
			if (scheduled[j-1].id == 0)
			{
				scheduled[j-1] = tasks[i];
				flag=1;
				break;
			}
		}
		if (flag == 0)
		{
			not_scheduled[k++] = tasks[i];
		}
	}

	printf("\nscheduled : \n");
	
	for (int i=0; i<m; i++)
		printf("+-----");
	printf("+\n");

	for (int i=0; i<m; i++)
		printf("|  %d  ", scheduled[i].id);
	printf("|\n");

	for (int i=0; i<m; i++)
		printf("+-----");
	printf("+\n");

	for (int i=0; i<=m; i++)
		printf("%d     ", i);
	
	
	int penalty = 0;
	printf("\n\nnot scheduled : ");
	for (int i=0; i<(n-m); i++)
	{
		printf("%d  ", not_scheduled[i].id);
		penalty += not_scheduled[i].p;
	}

	int profit = 0;
	for (int i=0; i<m; i++)
	{
		profit += scheduled[i].p;
	}

	printf("\n\nPenalty = %d", penalty);
	// printf("\n\nProfit = %d", profit);

	return 0;
}

// {1,  4,  70},
// {2,  2,  60},
// {3,  5,  50},
// {4,  3,  40},
// {5,  1,  30},
// {6,  4,  20},
// {7,  6,  10}

// {1,2,100},
// 	{2,1,10},
// 	{3,2,15},
// 	{4,2,27}


/*
7
4  
70
2  
60
5  
50
3  
40
1  
30
4  
20
6  
10
*/