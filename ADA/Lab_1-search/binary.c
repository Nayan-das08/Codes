// binary search

# include <stdio.h>
# include <time.h>
# include <stdlib.h>

const int MAXSIZE = 10000;

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
	int arr[MAXSIZE], target, p, step, n=1;
	FILE *file;
	file = fopen("binary_vals.dat", "w");
	for (n=1; n<=MAXSIZE; n++)
	{
		// get array
		for (int i=0; i<n; i++)
			arr[i] = i*2;
		
		// get random target
		// srand(time(0)+rand());
		// target = arr[rand()%n];

		// get first value of array as target
		target = arr[0];

		// search
		step = 0;
		p = RecBinarySearch(arr, 0, n-1, target, &step);
		fprintf(file, "%d %d\n", n, step);
	}
	int end = time(0);
	fclose(file);
	return 0;
}