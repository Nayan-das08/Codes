// tsp_bc

# include <stdio.h>
# include <stdlib.h>

int n = 5+1;
int size = 10;



int main()
{
	float z = INFINITY;
	float W[size][size] = {
		{0,  1,  2,  3,  4,  5},
		{1,  z, 20, 30, 10, 11},
		{2, 15,  z, 18,  4,  2},
		{3,  3,  5,  z,  2,  4},
		{4, 19,  6, 18,  z,  3},
		{5, 16,  4,  7, 16, z}
	};

	return 0;
}