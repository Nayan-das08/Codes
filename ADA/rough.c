# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <stdbool.h>

int a;

void func()
{
	printf("%d",a);
}

int main(int argc, char *argv[])
{
	a = 10;
	func();
	return 0;
}