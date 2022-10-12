# include <stdio.h>
# include <stdlib.h>

int size = 10;

void func()
{
	size--;
}

int main()
{
	printf("%d ", size);
	func();
	printf("%d ", size);
	
	return 0;
}