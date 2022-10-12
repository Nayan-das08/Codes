// merge sort

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

const int MAXSIZE = 100000;

void print_tab(int tab)
{
	for (int i=0; i<tab; i++)
		printf("|   ");
}

void merge(int arr[], int start, int m, int end, int tab, int *step)
{
	(*step)++;
	int n1 = (m+1)-start;
	int n2 = end-(m);
	print_tab(tab);
	printf("merge(%d, %d, %d)", start+1, m+1, end+1);
	printf("\n");

	// get two arrays
	int a[n1], b[n2];
	for (int i=0; i<n1; i++)
		a[i] = arr[start+i];
	for (int i=0; i<n2; i++)
		b[i] = arr[m+1+i];

	int i=0, j=0, k=start; 
	while (i < n1 && j < n2)
	{
		if (a[i] < b[j])
			arr[k++] = a[i++];
		else
			arr[k++] = b[j++];
	}
	while (i < n1)
		arr[k++] = a[i++];
	while (j < n2)
		arr[k++] = b[j++];	


}

void sort(int arr[], int start, int end, int tab, int *step)
{
	int m;
	if (start < end) 
	// some element exists in arr[start] to arr[end]
	{
		(*step)++;	
		m = (start + end)/2;
		print_tab(tab);
		printf("sort(%d, %d)", start+1, end+1);
		printf("\n");

		sort(arr, start, m, ++tab, step);
		sort(arr, m+1, end, tab, step);
		merge(arr, start, m, end, tab, step);
	}	
	else
	{
		print_tab(tab);
		printf("sort(%d, %d)  *", start+1, end+1);
		printf("\n");
	}
}



int main(int argc, char *argv[])
{
	int size = 8;
	int arr[] = {3,41,52,26,38,57,9,49};
	int step;

	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);
	
	printf("\n\n");
	sort(arr, 0, size-1, -1, &step);	

	printf("\n");
	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);
	
	printf("\n\nsteps = %d", step);
	return 0;
}
