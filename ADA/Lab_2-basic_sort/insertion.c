# include <stdio.h>

void sort(int arr[], int size)
{
	int key, i, j;
	for (i=1; i<size; i++)
	{
		key=arr[i];
		for (j=i-1; j>=0; j--)
		{
			if (arr[j] > key)
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j+1] = key;
	}
}

int main()
{
	int arr[] = {5,2,1,4,3};
	int size = sizeof(arr)/sizeof(int);

	printf("Unsorted array\t");
	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);
	
	sort(arr, size);
	
	printf("\nSorted array\t");
	for (int i=0; i<size; i++)
		printf("%d  ", arr[i]);

}