# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <stdbool.h>

// const int size = 8;

void show(int s1, int e1, int s2, int e2)
{
	for (int i=s1; i<e1; i++)
	{
		for (int j=s2; j<e2; j++)
			printf("%d,%d  ", i,j);
		printf("\n");
	}	
	printf("\n\n");
}

void divide_arr(int size)
{
	int a=0, b=size/2, c=size;

	show(a,b,a,b);
	show(a,b,b,c);
	show(b,c,a,b);
	show(b,c,b,c);
}

bool check(int n)
{
	int ln1 = log(n)/log(2);
	float ln2 = log(n)/log(2);
	
	if ((ln2 - ln1) != 0)
		return false;
	else
		return true;

}

int main(int argc, char *argv[])
{
	int n = atoi(argv[1]);
	if (check(n) == false)
		printf("%d is not in order of 2",n);
	else
	{
		show(0, n, 0, n);
		divide_arr(n);
	}

	return 0;
}