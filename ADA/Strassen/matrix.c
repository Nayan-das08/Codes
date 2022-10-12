// matrix multiplication

# include <stdio.h>
# include <stdlib.h>

const int size = 2;

int main()
{
	int a[size][size], b[size][size], c[size][size];
	int n=1, sum=0, prod=1;

	// show array a and b
	for (int i=0; i<size; i++)
		for (int j=0; j<size; j++)
		{
			a[i][j] = n;
			b[i][j] = n+4;
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

	// Strassen Method
	int p = (a[0][0] + a[1][1]) * (b[0][0] + b[1][1]);
	int q = (a[1][0] + a[1][1]) * b[0][0];
	int r = (a[0][0]) * (b[0][1] - b[1][1]);
	int s = (a[1][1]) * (b[1][0] - b[0][0]);
	int t = (a[0][0] + a[0][1]) * b[1][1];
	int u = (a[1][0] - a[0][0]) * (b[0][0] + b[0][1]);
	int v = (a[0][1] - a[1][1]) * (b[1][0] + b[1][1]);

	int d[size][size];

	d[0][0] = p+s-t+v;
	d[0][1] = r+t;
	d[1][0] = q+s;
	d[1][1] = p+r-q+u;

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