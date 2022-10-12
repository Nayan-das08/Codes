# include <stdio.h>
# include <stdlib.h>

void progress_bar(int progress, int total)
{
	int i;
	int percent = (progress/(float)total)*100;
	printf("\r|");
	for (i=1; i<=percent/2; i++)
		printf("#");
	for (i; i<=(50); i++)
		printf("-");
	for (i=1; i<100; i++)
		printf("-");
	printf("| %d%\r", percent);
}

int main(int argc, char *argv[])
{
	for (int i=1; i<=1000; i++)
		progress_bar(i,1000);
	// progress_bar(75, 100);
	return 0;
}