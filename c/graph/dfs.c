#include <stdio.h>
int n;

void dfs(int curr, int am[][n], int visited[], int n){
    if(visited[curr] == 0){
        printf("%d ", curr);
        int i;
        visited[curr] = 1;
        for(i = 0; i < n; i++)
            if((am[curr][i] == 1) && (visited[i] == 0))
                dfs(i, am, visited, n);
    }
}

int main() {
    int x, y, start;
    char ch;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    int am[n][n], visited[n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            am[i][j] = 0;
    for(int i = 0; i < n; i++)
        visited[i] = 0;
    do{
        printf("Enter the start node: ");
        scanf("%d", &x);
        printf("Enter the end node: ");
        scanf("%d", &y);
        if(x < 0 || x >= n || y < 0 || y >= n){
            printf("Enter a valid node");
            continue;
        }
        am[x][y] = 1;
        am[y][x] = 1;
        printf("\nDo you want to continue?(y/n): ");
        scanf(" %c", &ch);
    }while(ch == 'y' || ch == 'Y');
    while(1) {
        printf("Enter the starting node: ");
        scanf("%d", &start);
        if(start >= 0 && start < n)
            break;
    }
    dfs(start, am, visited, n);
    return 0;
}