// bfs

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

void show_stack(int stack[], int n_stack)
{
    printf("\n\nstack : ");
    for (int i=0; i<n_stack; i++)
        printf("%d  ", stack[i]);
    printf("\n");
}

void push(int stack[], int *n_stack, int val)
{
    (*n_stack)++;
    stack[(*n_stack)] = val;
}

int main()
{
	// system("cls");
	printf("\nDEPTH FIRST SEARCH");
	
	int W[10][10] = {
		{0,1,2,3,4,5,6,7},
        {1,0,1,0,1,1,0,0},
        {2,1,0,1,0,0,1,1},
        {3,0,1,0,0,0,0,0},
        {4,1,0,0,0,0,0,0},
        {5,1,0,0,0,0,0,0},
        {6,0,1,0,0,0,0,0}, 
        {7,0,1,0,0,0,0,0} 
    };
    int n=7+1;
    int V[] = {1,2,3,4,5,6,7};
    // memcpy(V,W,n*sizeof(int));


    printf("\n\nnodes are: ");
    for (int i=1; i<n; i++)
    	printf("%d  ", V[i]);

    int stack[10];
    int top = -1;
    // stack[0] = V[0];
    push(stack, &top, V[0]);

    show_stack(stack, top);

    // printf("stack[top] = %d", stack[top]);
    printf("%d", stack[top]);
    // printf("\n\n");
    // for(int i=1; i<n; i++)
    // {
    //     if (W[stack[top]][i] == 1)
    //         printf("%d\n", i);   
    // }
	return 0;
}