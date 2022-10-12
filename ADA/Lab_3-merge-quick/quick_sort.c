// quick sort

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

const int MAXSIZE = 10000;

void swap(int arr[], int i, int j)
{
	int temp = arr[i]; 
	arr[i] = arr[j];
	arr[j] = temp;
}

void show_arr(int arr[], int size)
{
	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);
	printf("\n");
}

void print_tab(int tab)
{
	for (int i=0; i<tab; i++)
		printf("|   ");
}

int partition(int arr[], int p, int r, int tab)
{
	int pivot = arr[r]; // setting last element as pivot
	int i=p;
	for (int j=p; j<r; j++)
		if (arr[j] <= pivot)
			swap(arr, i++, j);
	swap(arr, i, r); 
	// show_arr(arr, size);
	
	print_tab(tab);
	printf("partition(arr, %d, %d) ->> %d", p, r, i);
	printf("\n");
	
	return i;
}

void quick(int arr[], int p, int r, int tab)
{
	int q;
	if (p < r) // elements exist in array
	{
		print_tab(tab);
		printf("quick(arr, %d, %d)", p, r);
		printf("\n");
		if (tab == -1)
			printf("\n");

		q = partition(arr, p, r, ++tab);
		quick(arr, p, q-1, tab);
		quick(arr, q+1, r, tab);
		
	}
	else
	{
		print_tab(tab);
		printf("quick(arr, %d, %d) *", p, r);
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	int arr[MAXSIZE];
	int size = atoi(argv[1]);

	srand(time(0)+rand());
	for (int i=0; i<size; i++)
		arr[i] = rand()%100;

	show_arr(arr, size);
	printf("\n");

	quick(arr, 0, size-1, -1);
	
	printf("\n");
	show_arr(arr, size);
	return 0;
}