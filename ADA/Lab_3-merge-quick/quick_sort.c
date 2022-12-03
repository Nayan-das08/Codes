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
	// printf("\n");
}

void print_tab(int tab)
{
	for (int i=0; i<tab; i++)
		printf("|   ");
}

int partition(int arr[], int p, int r, int tab, int size)
{
	int pivot = arr[r]; // setting last element as pivot
	int i=p;
	// print_tab(tab);
	// printf("pivot = %d\n", pivot);
	for (int j=p; j<r; j++)
		if (arr[j] <= pivot)
		{
			// print_tab(tab);
			// printf("swap(%d,%d)\n", i+1, j+1);
			swap(arr, i++, j);
		}
	swap(arr, i, r); 
	// show_arr(arr, size);
	print_tab(tab);
	printf("partition(%d, %d) ->> %d\t", p+1, r+1, i+1);
	show_arr(arr, size);
	printf("\n");
	
	return i;
}

void quick(int arr[], int p, int r, int tab, int size)
{
	int q;
	if (p < r) // elements exist in array
	{
		print_tab(tab);
		printf("quick(%d, %d)", p+1, r+1);
		printf("\n");
		if (tab == -1)
			printf("\n");

		q = partition(arr, p, r, ++tab, size);
		quick(arr, p, q-1, tab, size);
		quick(arr, q+1, r, tab, size);
		
	}
	else
	{
		print_tab(tab);
		printf("quick(%d, %d) *", p+1, r+1);
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	// int arr[MAXSIZE];
	// int size = atoi(argv[1]);
	// int arr[] = {2,8,7,1,3,5,6,4};
	int arr[] = {1,2,3,4,5,6,7,8};
	int size = 8;

	// srand(time(0)+rand());
	// for (int i=0; i<size; i++)
	// 	arr[i] = rand()%100;

	show_arr(arr, size);
	printf("\n");

	quick(arr, 0, size-1, -1, size);
	
	printf("\n");
	show_arr(arr, size);
	return 0;
}