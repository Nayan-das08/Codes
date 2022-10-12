// matrix multiplication

# include <stdio.h>
# include <stdlib.h>

const int size = 2;

void show(int arr[][size])
{
	for (int i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
			printf("%d  ", arr[i][j]);
		printf("\n");
	}	
	printf("\n\n");
}


void subtract(int a[][size], int b[][size], int c[][size], int r_start, int r_end, int c_start, int c_end)
{
	for (int i=r_start; i<r_end; i++)
		for (int j=c_start; j<c_end; j++)
			c[i][j] = a[i][j] - b[i][j];
}	

void add(int a[][size], int b[][size], int c[][size], int r_start, int r_end, int c_start, int c_end)
{
	for (int i=r_start; i<r_end; i++)
		for (int j=c_start; j<c_end; j++)
			c[i][j] = a[i][j] + b[i][j];
}	

void divide_arr(int size, int a_00, int a_01, int a_10, int a_11, int b_00, int b_01, int b_10, int b_11)
{
	int a=0, b=size/2, c=size;

	// show(a,b,a,b);
	// show(a,b,b,c);
	// show(b,c,a,b);
	// show(b,c,b,c);
}

void multiply(int a[][size], int b[][size], int c[][size])
{
	int a_00, a_01, a_10, a_11, b_00, b_01, b_10, b_11;
	int temp1[size][size], temp2[size][size];
	int x=0, y=size/2, z=size;

	add(a,a,temp1, a,b,a,b);
	add()
	// show(temp);

	// int p = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
	// int q = (a[1][0] + a[1][1]) * b[0][0];
	// int r = (a[0][0]) * (b[0][1] - b[1][1]);
	// int s = (a[1][1]) * (b[1][0] -b[0][0]);
	// int t = (a[0][0] + a[0][1]) * b[1][1];
	// int u = (a[1][0] - a[0][0]) * (b[0][0] + b[0][1]);
	// int v = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);

	// c[0][0] = p+s-t+v;
	// c[0][1] = r+t;
	// c[1][0] = q+s;
	// c[1][1] = p+r-q+u;
}

int main()
{
	int a[size][size], b[size][size], c[size][size];
	int n=1, sum=0, prod=1;

	// set and show array a and b
	for (int i=0; i<size; i++)
		for (int j=0; j<size; j++)
		{
			a[i][j] = n;
			b[i][j] = n+(size*size);
			c[i][j] = 0;
			n++;
		}
	
	for (int i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
			printf("%2d  ", a[i][j]);
		printf("\n");
	}

	printf("\n\n");
	for (int i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
			printf("%2d  ", b[i][j]);
		printf("\n");
	}


	// traditional multiplication
	for (int i=0; i<size; i++)
		for (int j=0; j<size; j++)
			for(int k=0; k<size; k++)
				c[i][j] += a[i][k]*b[k][j];

	
	// show array c
	printf("\n\n");
	for (int i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
			printf("%2d  ", c[i][j]);
		printf("\n");
	}

	
	// -------------------------------

	int d[size][size];
	// add(a,b,d, 0,size,0,size);
	multiply(a,b,d);

	// show array d
	printf("\n\n");
	for (int i=0; i<size; i++)
	{
		for (int j=0; j<size; j++)
			printf("%2d  ", d[i][j]);
		printf("\n");
	}
	
	


	return 0;
}