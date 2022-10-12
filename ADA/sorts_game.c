# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <windows.h>

const int MAXSIZE = 100;

// misc
void arr_state(int arr[], int size)
{
	system("cls");
	for (int i=0; i<size; i++)
	{
		printf("%d\t", arr[i]);
		for (int j=0; j<arr[i]; j++)
			printf("o");
		// Sleep(1);
		printf("\n");
	}
	Sleep(100);
}

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void shuffle(int arr[], int size)
{
	srand(time(0));
	for (int i=0; i<size; i++)
		swap(arr, i, rand()%size);
}

// --------------------------------------------

// MERGE SORT
void merge(int arr[], int start, int m, int end)
{
	int n1 = (m+1)-start;
	int n2 = end-(m);

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

void mergeSort(int arr[], int start, int end, int size)
{
	int m;
	if (start < end) 
	// some element exists in arr[start] to arr[end]
	{
		m = (start + end)/2;
		mergeSort(arr, start, m, size);
		mergeSort(arr, m+1, end, size);
		merge(arr, start, m, end);
		arr_state(arr, size);
		
	}	
}

// --------------------------------------------

// QUICK SORT
int partition(int arr[], int p, int r, int size)
{
	int pivot = arr[r]; // setting last element as pivot
	int i=p;
	for (int j=p; j<r; j++)
		if (arr[j] <= pivot)
			swap(arr, i++, j);
	swap(arr, i, r); 

	arr_state(arr, size);
	return i;
}

void quickSort(int arr[], int p, int r, int size)
{
	int q;
	if (p < r) // elements exist in array
	{
		q = partition(arr, p, r, size);
		quickSort(arr, p, q-1, size);
		quickSort(arr, q+1, r, size);
	}
}

// --------------------------------------------

// BUBBLE SORT
void bubbleSort(int arr[], int size)
{
	for (int i=0; i<size-1; i++)
	{
		for (int j=1; j<size-i; j++)
		{
			if (arr[j-1] > arr[j])
				swap(arr, j-1, j);
		}
		arr_state(arr, size);
	}
}

// --------------------------------------------

// SELECTION SORT
void selectionSort(int arr[], int size)
{
	int small;
	for (int i=0; i<size-1; i++)
	{
		small = i;
		for (int j=i+1; j<size; j++)
		{
			if (arr[j] < arr[small])
				small = j;
		}
		swap(arr, i, small);
		arr_state(arr, size);
	}
}

// --------------------------------------------

// INSERTION SORT
void insertionSort(int arr[], int size)
{
	int key, i, j;
	for (i=1; i<size; i++)
	{
		key=arr[i];
		for (j=i-1; j>=0; j--)
		{
			if (arr[j] > key)
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j+1] = key;
		arr_state(arr, size);
	}
}

int main(int argc, char *argv[])
{
	int arr[MAXSIZE], size, choice;
	char y_n;
	size = atoi(argv[1]);

	for (int i=0; i<size; i++)
		arr[i] = i+1;
	do
	{
		shuffle(arr, size);

		system("cls");
		printf("\nChoose from the following :-\n");
		printf("    1. Merge Sort \n    2. Quick Sort \n    3. Bubble Sort \n    4. Selection Sort \n    5. Insertion Sort");
		printf("\n\n    Enter choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1: mergeSort(arr, 0, size-1, size);
			break;

			case 2: quickSort(arr, 0, size-1, size);
			break;

			case 3: bubbleSort(arr, size);
			break;

			case 4: selectionSort(arr, size);
			break;

			case 5: insertionSort(arr, size);
			break;

			default: 
			{
				printf("\nINVALID INPUT ENTERED! \nCOMPILE AGAIN!\n");
				exit(0);
			}
		}
		printf("\n\nDo you wish to continue? (y/n) : ");
		scanf("%s", &y_n);
	}
	while ('y' == tolower(y_n));
	
	printf("\nexited program");
	
	return 0;
}