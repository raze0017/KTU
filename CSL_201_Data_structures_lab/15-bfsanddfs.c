#include <stdio.h>

int MAX=4;

void dfs(int vertex, int adj[][MAX], int visited[], int n) {
    visited[vertex] = 1;
    printf("%c ", vertex + 'A');
    for (int i = 0; i < n; i++) {
        if (adj[vertex][i] == 1 && !visited[i]) {
            dfs(i, adj, visited, n);
        }
    }
}

void bfs(int vertex, int adj[][MAX], int visited[], int n) {
    int queue[n];
    int front = 0;
    int rear = 0;
    queue[rear++] = vertex;
    visited[vertex] = 1;
    while (front < rear) {
        int current = queue[front];
        front++;
        printf("%c ", current + 'A');
        for (int i = 0; i < n; i++) {
            if (adj[current][i] == 1 && visited[i] == 0) {
                queue[rear] = i;
                rear++;
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int n = 4;
    int adj_matrix[4][4] = {
        {0, 1, 1, 0},
        {1, 0, 0, 1},
        {1, 0, 0, 0},
        {0, 1, 0, 0}
    };
    int visited[4] = {0};
    int r;
    printf("ENTER CHOICE 1BFS OR 2DFS");
    scanf("%d",&r);
    if(r==1){
        dfs(0,adj_matrix,visited,n);
    }else{
        bfs(0,adj_matrix,visited,n);
    }
    return 0;
}