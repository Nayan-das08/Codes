// matrix_3

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

const int size = 4;
int local_size = size;

void show(int arr[][size], int n)
{
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
			printf("%2d  ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
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


	printf("%d %d %d %d  \t", p,q,r,s);
	for (int i=p; i<q; i++)
		for (int j=r; j<s; j++)
			printf("%d  ", arr[i][j]);
	printf("\n");

	for (int i=p,x=0; i<q; i++,x++)
		for (int j=r,y=0; j<s; j++,y++)
			temp[x][y] = arr[i][j];
}

int add(int A[][local_size], int B[][local_size], int C[][local_size])
{
	for (int i=0; i<local_size; i++)
		for (int j=0; j<local_size; j++)
			C[i][j] = A[i][j] + B[i][j];
}
int sub(int A[][local_size], int B[][local_size], int C[][local_size])
{
	for (int i=0; i<local_size; i++)
		for (int j=0; j<local_size; j++)
			C[i][j] = A[i][j] - B[i][j];
}

void multiply(int A[][local_size], int B[][local_size], int C[][local_size], int count)
{
	// do not enter if required cycles are completed
	if (count < log(size)/log(2))
	{
		// update variables local_size and count
		local_size = local_size/2;
		count++;
		printf("\nLOCAL_SIZE = %d\n", local_size);
		printf("\nCOUNT		 = %d\n", count);
	
		// declare subarrays		
		int A_00[local_size][local_size], A_01[local_size][local_size];
		int A_10[local_size][local_size], A_11[local_size][local_size];
		int B_00[local_size][local_size], B_01[local_size][local_size];
		int B_10[local_size][local_size], B_11[local_size][local_size];


		printf("\n");
		// print arrays that are obtained in this function
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
	

		// -----------------------------------------------------------

		int x[local_size][local_size], y[local_size][local_size], z[local_size][local_size];
		
		int P[local_size][local_size], Q[local_size][local_size];
		int R[local_size][local_size], S[local_size][local_size];
		int T[local_size][local_size], U[local_size][local_size];
		int V[local_size][local_size];

		// P = (A_00 + A_11)(B_00 + B_11)
		add(A_00, A_11, x);
		add(B_00, B_11, y);
		multiply(x,y,P,count);

		// Q = (A_10 + A_11)(B_00)
		add(A_10, A_11, x);
		multiply(x,B_00,Q,count);
		
		// R = (A_00)(B_01 - B_11)
		sub(B_01, B_11, x);
		multiply(x,A_00,R,count);
		
		// S = (A_11)(B_10 - B_00)
		sub(B_10, B_00, x);
		multiply(x,A_11,S,count);
		
		// T = (A_00 + A_01)(B_11)
		add(A_00, A_01, x);
		multiply(x,B_11,T,count);
		
		// U = (A_10 - A_00)(B_00 + B_01)
		sub(A_10, A_00, x);
		add(B_00, B_01, y);
		multiply(x,y,U,count);

		// V = (A_01 - A_11)(B_10 + B_11)
		add(A_01, A_11, x);
		add(B_10, B_11, y);
		multiply(x,y,V,count);

		// show arrays manually
		printf("\n\n");
		printf("P\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%2d  ", P[i][j]);
			printf("\n");
		}
		printf("\nQ\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%2d  ", Q[i][j]);
			printf("\n");
		}
		printf("\nR\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%2d  ", R[i][j]);
			printf("\n");
		}
		printf("\nS\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%2d  ", S[i][j]);
			printf("\n");
		}
		printf("\nT\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%2d  ", T[i][j]);
			printf("\n");
		}
		printf("\nU\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%2d  ", U[i][j]);
			printf("\n");
		}
		printf("\nV\n");
		for (int i=0; i<local_size; i++)
		{
			for (int j=0; j<local_size; j++)
				printf("%2d  ", V[i][j]);
			printf("\n");
		}


		multiply(A_00, B_00, C, count);
	}
	else
	{
		C[0][0] = A[0][0] * B[0][0];
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

	show(a,size);
	show(b,size);
	show(c,size);	

	multiply(a,b,c,0);
	return 0;
}