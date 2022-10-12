#include <stdio.h>
#include <stdlib.h>
#define V 5

struct edge {
    int start;
    int end;
    int cost;
    int flag;
} edges[30];


int i, j, k;

int arr[V][V] = {{0,  6,  7,  1, 10}, 
                 {6,  0,  5, 18,  2}, 
                 {7,  5,  0,  0,  0}, 
                 {1, 18,  4,  0,  3}, 
                 {10, 2, 12,  3,  0}};

void kruskal() {
    k=0;
/*    for (i=0; i<V; i++) 
    {
        for (j=i+1; j<V; j++) 
        {
            if (arr[i][j] > 0) 
            {
                edges[k].start = i;
                edges[k].end = j;
                edges[k].cost = arr[i][j];
                edges[k].flag = 0;
                printf("%d, %d, %d, %d\n", edges[k].start, edges[k].end, edges[k].cost, edges[k].flag);
                k++;
            }
        }
    }*/

    int k=0;
    for (int i=0; i<V; i++)
    {
        for (int j=i+1; j<V; j++)
        {
            if (arr[i][j] > 0)
            {
                printf("%d, %d\n", i,j);
                edges[k].start  = i;
                edges[k].end    = j;
                edges[k].cost   = arr[i][j];
                edges[k].flag   = 1;
                k++;
            }
        }
    }
}

int main(void) {
    kruskal();
}