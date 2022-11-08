// nqueen

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int N = 4;
int x[] = {0,0,0,0,0};

int place(int k, int i)
{
	for (int j=1; j<=(k-1); j++)
	{
		if ( (x[j] == i) ||	(abs(x[j]-i)==abs(j-k)) )
			return 0;
	}
	return 1;
}

void algo(int k)
{
	for (int i=1; i<=N; i++)
	{
		printf("algo(%d,%d)\n",k,i);
		if (place(k,i))
		{
			x[i] = i;
			if (k == N)
			{
				printf("\nsoln : ");
				for (int j=1; j<=N; j++)
					printf("%d  ", x[j]);
			}
			else
				algo(k+1);
		}
	}
}

int main()
{
	algo(1);
}