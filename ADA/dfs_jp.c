#include <stdio.h>
#include <stdlib.h>
#define V 9

void dfs_visit(int);
void dfs();
                //        start
                //       r, s  t  u  v  w  x  y  z 
int adj[V+1][V+1] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
                     {1, 0, 1, 1, 0, 0, 1, 0, 0, 0}, //r
                     {2, 1, 0, 0, 1, 1, 0, 0, 0, 0}, //s
                     {3, 1, 0, 0, 1, 0, 0, 0, 0, 0}, //t
                     {4, 0, 1, 1, 0, 0, 0, 0, 1, 0}, //u
                     {5, 0, 1, 0, 0, 0, 1, 0, 1, 0}, //v
                     {6, 1, 0, 0, 0, 1, 0, 1, 0, 1}, //w
                     {7, 0, 0, 0, 0, 0, 1, 0, 1, 1}, //x
                     {8, 0, 0, 0, 1, 1, 0, 1, 0, 0}, //y
                     {9, 0, 0, 0, 0, 0, 1, 1, 0, 0}  //z
};

// 0: white
// 1: gray
// 2: black

int i, j, k, time;
int status[V];
int parent[V];
int d[V];
int f[V];

char vertice(int num) {
    switch(num) {
        case 1:
        return 'r';

        case 2:
        return 's';

        case 3:
        return 't';

        case 4:
        return 'u';

        case 5:
        return 'v';

        case 6:
        return 'w';

        case 7:
        return 'x';

        case 8:
        return 'y';

        case 9:
        return 'z';
    }
}

void dfs() {
    for (i=1; i<V+1; i++) {
        status[i-1] = 0;
        parent[i-1] = NULL;
    }
    time=0;
    for (i=1; i<V+1; i++) {
        if (status[i-1] == 0) {
            dfs_visit(i);
        }
    }
}

void dfs_visit(int u) {
    printf("%c ", vertice(u));
    time++;
    d[u-1] = time;          //current timestamp marked.
                            //curr. vertex discovered at this time
    status[u-1] = 1;
    for (j=1; j<V+1; j++) {
        if (status[j-1]==0) {
            printf("inside for and if\n");
            parent[j-1]=u;
            dfs_visit(j);
        }
    }
    time++;
    f[u-1] = time;          //curr. vertex finished
    status[u-1] = 2;        //turned black
}


void show() {
    printf("r s t u v w x y z");
    printf("\n");
    for (i=0; i<V; i++) {
        printf("%c ", d[i]);
    }
    printf(" : discover time");
    printf("\n");
    for (i=0; i<V; i++) {
        printf("%c ", f[i]);
    }
    printf(" : finish time");
    printf("\n");
    for (i=0; i<V; i++) {
        printf("%c ", vertice(parent[i]));
    }
    printf(" : parent");
    printf("\n");
    for (i=0; i<V; i++) {
        printf("%d ", status[i]);
    }
    printf(" : status");
    printf("\n");

}


int main(void) {
    dfs();
    printf("\n");
    show();
}