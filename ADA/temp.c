# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>

struct hello
{
	int a,b;
};

int main()
{
	struct hello p[] = {
		{1,2},
		{3,4}
	};
	struct hello *h = (struct hello *) calloc(5, sizeof(struct hello));

	h[0] = p[0];
	for (int i=0; i<5; i++)
		printf("%d  %d\n", h[i].a, h[i].b);
}