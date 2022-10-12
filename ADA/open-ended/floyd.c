// floyd-warshall

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

const int size = 10;
int n = 5+1;

void show(float arr[][10], char name[])
{
	char space[10] = "";
	for (int i=0; i<strlen(name); i++)
        strcat(space, " ");

	printf("%s : ", name);
	for (int i=0; i<n; i++)
	{
		if (i == 0)
		{
			for (int j=0; j<n; j++)
				if (j == 0)
					printf("%2d | ", (int)arr[i][j]);
				else
					printf("%2d ", (int)arr[i][j]);
			printf("\n%s   ", space);
			for (int j=0; j<n; j++)
				printf("---");
			printf("--");
		}
		else
		{
			printf("%s   ", space);
			for (int j=0; j<n; j++)
				if (j == 0)
					printf("%2d | ", (int)arr[i][j]);
				else
				{
					if (arr[i][j] == INFINITY)
						printf(" %lc ", (wint_t)236);
					else
						printf("%2d ", (int)arr[i][j]);
				}

		}	
		printf("\n");
	}
	printf("\n");
}

float min(float a, float b)
{
	if (a < b)
		return a;
	else
		return b;
}

void resolve_path(float path[size][size][size], int start, int end)
{
	int parent = (int)path[4][start][end];
	if (parent != start)
	{
		resolve_path(path, start, parent);
		resolve_path(path, parent, end);
	}
	else
		// print(f' {end} ->', end='')
		printf(" %d ->", end);
}

void give_path(float path[size][size][size], int start, int end)
{
	printf("%d -> %d   ----   %d ->", start, end, start);
	resolve_path(path, start, end);
	printf("\b\b  \n");
}

void floyd_warshall(float W[][size], float D[size][size][size], float path[size][size][size])
{
	// unnecessary
	memcpy(D[0], W, size*size*sizeof(float));
	// show(D[0], "D[0]");

	for (int i=1; i<n; i++)
		for (int j=1; j<n; j++)
			if ((D[0][i][j] == 0) || (D[0][i][j] == INFINITY))
				path[0][i][j] = -1;
			else
				path[0][i][j] = i;

	for (int k=1; k<n; k++)
	{
		// path[k] = path[k-1]
		memcpy(path[k], path[k-1], size*size*sizeof(float));
		for (int i=1; i<n; i++)
		{
			for (int j=1; j<n; j++)
			{
				D[k][i][j] = min(D[k-1][i][j], D[k-1][i][k] + D[k-1][k][j]);
				if (D[k][i][j] != D[k-1][i][j])
					path[k][i][j] = k;
			}
		}
	}

	show(D[4], "D[4]");
	show(path[4], "Pi[4]");
}

// --------------------------------------------------------

int main()
{
	float z = INFINITY;
	float W[10][10] = {
		{0,	1, 2, 3, 4, 5},
		{1,	0, 3, 8, z,-4},
		{2,	4, 0, z, 1, 7},
		{3,	z, 4, 0, z, z},
		{4,	2, z,-5, 0, z},
		{5,	z, z, z, 6, 0}	
	};

	show(W, "W");

	float D[10][10][10] = {0};
	float path[10][10][10] = {0};
	
	for (int k=0; k<n; k++)
		for (int i=0; i<n; i++)
		{
			path[k][0][i] = path[k][i][0] = i;
			D[k][0][i] = D[k][i][0] = i;
		}

	floyd_warshall(W,D,path);

	float start, end;
	for (int i=1; i<n; i++)
		for (int j=1; j<n; j++)
			if (i != j)
			{
				start = i;
				end = j;
				give_path(path, start, end);
			}

	return 0;
}

