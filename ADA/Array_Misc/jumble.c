// jumble an array

# include <stdio.h>
# include <stdlib.h>
# include <time.h>

const int MAXSIZE = 100;

void arr_state(int arr[], int size)
{
	for (int i=0; i<size; i++)
	{
		for (int j=1; j<arr[i]; j++)
			printf("o");
		printf("\n");
	}
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

int main(int argc, char *argv[])
{
	int arr[MAXSIZE], size;
	size = atoi(argv[1]);

	for (int i=0; i<size; i++)
		arr[i] = i+1;

	arr_state(arr, size);

	// printf("\n\n\n");
	// shuffle(arr, size);

	// arr_state(arr, size);	

	return 0;
}