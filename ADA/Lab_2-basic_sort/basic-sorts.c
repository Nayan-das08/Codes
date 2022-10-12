// insertion, bubble and selection sort

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <ctype.h>

void swap(int arr[], int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void show_arr(int arr[], int size)
{
	for (int k=0; k<size; k++)
		printf("%3d", arr[k]);
	printf("\n");
}

void bubbleSort(int arr[], int size)
{
	for (int i=0; i<size-1; i++)
	{
		for (int j=1; j<size-1-i; j++)
		{
			if (arr[j-1] > arr[j])
				swap(arr, j-1, j);
		}
		show_arr(arr, size);
	}
}

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
		show_arr(arr, size);
	}
}

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
		show_arr(arr, size);
	}
}

int main()
{
	// int arr_S[] = {4,2,7,8,1,5,9,0,3,6};
	// const int size = sizeof(arr_S)/sizeof(int);

	// int arr_B[size];
	// for (int i=0; i<size; i++)
	// 	arr_B[i] = arr_S[i];

	const int size = 10;
	int arr[size], choice;
	char y_n; 
	
	do
	{
		srand(time(0)+rand());
		for (int i=0; i<size; i++)
		{
			arr[i] = rand()%100;
		}
		printf("\nChoose from the following :-\n");
		printf("    1. Selection Sort \n    2. Bubble Sort \n    3. Insertion Sort");
		printf("\n\n    Enter choice : ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
			{
				printf("\nSELECTION SORT\n");
				selectionSort(arr, size);
			}
			break;

			case 2:
			{
				printf("\nBUBBLE SORT\n");
				bubbleSort(arr, size);
			}
			break;

			case 3:
			{
				printf("\nINSERTION SORT\n");
				insertionSort(arr, size);
			}
			break;

			default: printf("\nINVALID INPUT OF CHOICE");
		}
		printf("\n\nDo you wish to continue? (y/n) : ");
		scanf("%s", &y_n);
	}
	while('y' == tolower(y_n));
	printf("\nexited program");
	return 0;
}