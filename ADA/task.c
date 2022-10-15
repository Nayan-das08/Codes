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

void put(int schedule[], int d)
{
	if (schedule[d])
}

int main()
{
	struct task tasks[] = {
		{1,2,100},
		{2,1,10},
		{3,2,15},
		{4,1,27}
	};

	n = sizeof(tasks)/sizeof(struct task);

	quick(tasks,0,n-1);

	printf("ID\tDeadline\tProfit\n");
	for (int i=0; i<n; i++)
		printf("%2d\t  %2d\t\t  %2d\n", tasks[i].id, tasks[i].d, tasks[i].p);

	int m = get_max_deadline(tasks);
	// struct task *schedule = (struct task *) calloc(m*sizeof(struct task));
	int *schedule = (int *) calloc(m,sizeof(int));
	int d;

	for (int i=0; i<2; i++)
	{
		d = tasks[i].d;
		put(schedule, d);
		if (schedule[temp_d-1] == 0)
			schedule[temp_d-1] = tasks[i].id;
	}

	printf("\n\nscheduled : ");
	for (int i=0; i<m; i++)
		printf("%d  ", schedule[i]);
	return 0;
}