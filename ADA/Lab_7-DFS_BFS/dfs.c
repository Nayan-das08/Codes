# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int n;

int check(int arr[], int target)
{
    for (int i=0; i<n; i++)
        if (arr[i] == target) // the neighbouring node is already visited
            return 1;
    return 0;
}

// DFS functions
void show_stack(int stack[], int top)
{
    printf("\nstack : ");
    for (int i=0; i<=top; i++)
        printf("%d  ", stack[i]);
}

void push(int stack[], int *top, int val)
{
    (*top)++;
    stack[(*top)] = val;
}

void pop(int stack[], int *top, int **W, int dfs[], int visited[])
{
    static int n_visited = 0;
    int val = stack[(*top)];
    
    // move top variable down
    (*top)--;
    // printf("\n\npopped %d", val);

    // put stack[(*top)] in visited
    dfs[n_visited++] = val;

    // printf("\ntraversed : ");
    // for (int i=0; i<n; i++)
    //     printf("%d  ", dfs[i]);

    // printf("\nvisited   : ");
    // for (int i=0; i<n; i++)
    //     printf("%d  ", visited[i]);

    // push neighbouring nodes of val
    for (int i=1; i<=n; i++)
    {
        if (W[val][i] > 0)
        {
            if (visited[i] == 0)
            {
                push(stack, top, i);
                visited[i] = 1;
            }
        }
    }
    // show_stack(stack, *top);
}

void depth_first_search(int **W)
{
    int *dfs     = (int *) calloc(n,sizeof(int));
    int *stack   = (int *) calloc(n,sizeof(int));
    int *visited = (int *) calloc(n+1, sizeof(int));
    int top      = -1;

    push(stack, &top, W[0][1]);
    visited[1] = 1;

    for (int i=0; i<n; i++)
        pop(stack, &top, W, dfs, visited);

    printf("\nDFS   : ");
    for (int i=0; i<n; i++)
        printf("%d  ", dfs[i]);
        
    free(dfs);
    free(stack);
}

// BFS functions
void show_queue(int queue[], int front, int rear)
{
    printf("\nqueue : ");
    for (int i=front; i<=rear; i++)
        printf("%d  ", queue[i]);
}

void enqueue(int queue[], int *rear, int val)
{
    (*rear)++;
    queue[(*rear)] = val;
}

void dequeue(int queue[], int *front, int *rear, int **W, int bfs[], int visited[])
{
    static int n_visited = 0;
    int val = queue[(*front)];
    
    // move front variable forward
    (*front)++;
    // printf("\n\npopped %d", val);

    // put queue[(*front)] in visited
    bfs[n_visited++] = val;

    // printf("\ntraversed : ");
    // for (int i=0; i<n; i++)
    //     printf("%d  ", bfs[i]);

    // printf("\nvisited   : ");
    // for (int i=0; i<n; i++)
    //     printf("%d  ", visited[i]);

    // enqueue neighbouring nodes of val
    for (int i=1; i<=n; i++)
    {
        if (W[val][i] > 0)
            if (visited[i] == 0)
            {
                enqueue(queue, rear, i);
                visited[i] = 1;
            }
    }
    // show_queue(queue, *front, *rear);
}

void breadth_first_search(int **W)
{
    int *bfs     = (int *) calloc(n,sizeof(int));
    int *queue   = (int *) calloc(n,sizeof(int));
    int *visited = (int *) calloc(n+1, sizeof(int));
    int rear     = -1;
    int front    = 0;

    enqueue(queue, &rear, W[0][1]);
    visited[1] = 1;

    for (int i=0; i<n; i++)
        dequeue(queue, &front, &rear, W, bfs, visited);

    printf("\nBFS   : ");
    for (int i=0; i<n; i++)
        printf("%d  ", bfs[i]);
    
    free(bfs);
    free(queue);
}

int main()
{
	system("cls");
	printf("\nGRAPH TRAVERSAL TECHNIQUES");
    printf("\nDepth First Search & Breadth First Search\n");
	
    printf("\nEnter number of nodes : ");
    scanf("%d", &n);
    
    int **W = (int **) malloc((n+1)*sizeof(int *));
    for (int i=0; i<n+1; i++)
    {
        W[i] = (int *) calloc(n+1, sizeof(int));
    }

    printf("\nEnter Adjacency Matrix:\n");
    for (int i=0; i<n+1; i++)
    {
        for (int j=0; j<n+1; j++)
            scanf("%d", &W[i][j]);
    }

    printf("\n\nNodes : ");
    for (int i=1; i<n+1; i++)
        printf("%d  ", W[0][i]);
    printf("\n");

    depth_first_search(W);
    breadth_first_search(W);

    printf("\n");
	return 0;
}