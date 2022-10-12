# include <stdio.h>
# include <stdlib.h>
# include <time.h>

const int MAXSIZE = 50;

int RecLinearSearch(int arr[], int target, int loc, int *step)
{
	(*step)++;
	if (arr[loc] == target)
		return loc;
	else
		return RecLinearSearch(arr, target, loc+1, step);
}

int RecBinarySearch(int arr[], int low, int high, int target, int *step)
{
	(*step)++;
	int m = (high + low)/2;
	// printf("low = %d \t high = %d \t m = %d\n", arr[low], arr[high], arr[m]);
	if (low > high)
		return -1;
	else
	{
		if (arr[m] == target)
			return m;
		else
		{
			if (target < arr[m])
				// high needs to move up
				return RecBinarySearch(arr, low, m-1, target, step);
			else
				// low need to move down
				return RecBinarySearch(arr, m+1, high, target, step);
		}	
	}
}

int main()
{
	int arr[MAXSIZE], target_L, target_B, p, step, n=1, k=0;
	FILE *file_linear, *file_binary;
	file_linear = fopen("linear_vals_2.dat", "w");
	file_binary = fopen("binary_vals.dat", "w");
	
	for (n=1; n<=MAXSIZE; n++)
	{
		// get array
		for (int i=0; i<n; i++)
			arr[i] = i*2;
		
		// get random target (for binary)
		srand(time(0)+rand());
		target_B = arr[rand()%n];
		target_B = arr[0];

		// get last value of array (for linear)
		target_L = arr[n-1];

		// linear search
		step = 0;
		p = RecLinearSearch(arr, target_L, 0, &step);
		fprintf(file_linear, "%d %d\n", n, step);

		// binary search
		step = 0;
		p = RecBinarySearch(arr, 0, n-1, target_L, &step);
		fprintf(file_binary, "%d %d\n", n, step);
	}
	fclose(file_linear);
	fclose(file_binary);
	printf("\nLinear and Binary Searchs are successfully performed on an array with varying size\n");
	printf("Plotting the graph using python code");
	system("python plot_linear_binary.py\n\n");
	return 0;
}