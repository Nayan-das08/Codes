# include <stdio.h>
# include <stdlib.h>
# include <time.h>

const int MAXSIZE = 10000;


int RecLinearSearch(int arr[], int target, int loc, int *step)
{
	(*step)++;
	if (arr[loc] == target)
		return loc;
	else
		return RecLinearSearch(arr, target, loc+1, step);
}


int main()
{
	int arr[MAXSIZE], target, p, step, n=1, k=0;
	FILE *file;
	file = fopen("linear_vals_2.dat", "w");
	for (n=1; n<=MAXSIZE; n++)
	{
		// get array
		for (int i=0; i<n; i++)
			arr[i] = i*2;
		
		// // get random target
		// srand(time(0)+rand());
		// target = arr[rand()%n];

		// get last value of array as target
		target = arr[n-1];

		// search
		step = 0;
		p = RecLinearSearch(arr, target, 0, &step);
		// printf("n: %d \tsteps: %d\n", n, step);
		fprintf(file, "%d %d\n", n, step);
	}
	fclose(file);
	return 0;
}