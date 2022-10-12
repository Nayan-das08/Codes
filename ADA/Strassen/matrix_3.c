// matrix_3

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

const int size = 4;
int local_size = 4;

void show(int n, int arr[][n])
{
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
			printf("%2d  ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int add(int A[][local_size], int B[][local_size], int C[][local_size])
{
	for (int i=0; i<local_size; i++)
		for (int j=0; j<local_size; j++)
			C[i][j] = A[i][j] + B[i][j];
}

void get_arr(int arr[][local_size*2], int temp[][size/2], int pos, int n)
{
	int a=0, b=n/2, c=n;
	int p,q,r,s;
	int x,y;
	
	//set p, q, r and s
	if (pos == 0)
	{
		p=a; q=b; r=a; s=b;
	}
	else if (pos == 1)
	{
		p=a; q=b; r=b; s=c;	
	}
	else if (pos == 2)
	{
		p=b; q=c; r=a; s=b;	
	}
	else if (pos == 3)
	{
		p=b; q=c; r=b; s=c;	
	}

	// for (int i=0; i<n; i++)
	// {
	// 	for (int j=0; j<n; j++)
	// 		printf("%2d  ", arr[i][j]);
	// 	printf("\n");
	// }
	// printf("\n");
	printf("%d %d %d %d  \t", p,q,r,s);
	for (int i=p; i<q; i++)
		for (int j=r; j<s; j++)
			printf("%d  ", arr[i][j]);
	printf("\n");

	for (int i=p,x=0; i<q; i++,x++)
		for (int j=r,y=0; j<s; j++,y++)
			temp[x][y] = arr[i][j];
}


// local_size is the size of the subarray for that iteration
// we supply it to the next cycle via global variable that is 
// 		updated as soon as we enter the function

// variable count is used to take note of number of cycles
// for master matrices of size N, number of cycles = log_2(N)
// example: 
// 		if N=2, we have log_2(2) = 1 cycle
// 		if N=4, we have log_2(4) = 2 cycles
// 		if N=8, we have log_2(8) = 3 cycles

void multiply(int A[][local_size], int B[][local_size], int C[][local_size], int count)
{
	// do not enter if required cycles are completed
	if (count < log(size)/log(2))
	{
		// update variables local_size and count
		local_size = local_size/2;
		printf("\nLOCAL_SIZE = %d\n", local_size);
		count++;
	
		// declare subarrays		
		int A_00[local_size][local_size], A_01[local_size][local_size];
		int A_10[local_size][local_size], A_11[local_size][local_size];
		int B_00[local_size][local_size], B_01[local_size][local_size];
		int B_10[local_size][local_size], B_11[local_size][local_size];


		// print arrays that are obtained in this function
		printf("\n");
		// for (int i=0; i<local_size*2; i++)
		// {
		// 	for (int j=0; j<local_size*2; j++)
		// 		printf("%d  ", A[i][j]);
		// 	printf("\n");
		// }
		// printf("\n\n");
		// for (int i=0; i<local_size*2; i++)
		// {
		// 	for (int j=0; j<local_size*2; j++)
		// 		printf("%d  ", B[i][j]);
		// 	printf("\n");
		// }
		// printf("\n\n");

		// get subarrays
		get_arr(A,A_00,0,local_size*2);
		get_arr(A,A_01,1,local_size*2);
		get_arr(A,A_10,2,local_size*2);
		get_arr(A,A_11,3,local_size*2);
	
		get_arr(B,B_00,0,local_size*2);
		get_arr(B,B_01,1,local_size*2);
		get_arr(B,B_10,2,local_size*2);
		get_arr(B,B_11,3,local_size*2);
	


		// show arrays manually: A_00, A_11, B_00, B_11
		printf("\n\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%d  ", A_00[i][j]);
			printf("\n");
		}
		
		printf("\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%d  ", A_11[i][j]);
			printf("\n");
		}
	
		printf("\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%d  ", B_00[i][j]);
			printf("\n");
		}
		
		printf("\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%d  ", B_11[i][j]);
			printf("\n");
		}

		// this doesn't work properly 
		/*show(local_size, A_00);
		show(local_size, A_11);
		show(local_size, B_00);
		show(local_size, B_00);*/

		// next recursive call
		multiply(A_00, B_00, C, count);
	}
}

int main()
{
	int a[size][size], b[size][size], c[size][size];
	int num=1;

	for (int i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
		{
			a[i][j] = num;
			b[i][j] = num+(size*size);
			c[i][j] = 0;
			num++;
		}
	}

	show(size, a);
	show(size, b);
	show(size, c);	

	multiply(a,b,c,0);
	return 0;
}