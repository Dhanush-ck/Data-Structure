#include <stdio.h>
int n;

void bfs(int curr, int am[][n], int visited[], int n){
    int queue[n], front = 0, rear = 0;
    queue[rear++] = curr;
    while(front < rear) {
        curr = queue[front++];
        visited[curr] = 1;
        printf("%d ", curr);
        for(int j = 0; j < n; j++){
            if(am[curr][j] == 1 && visited[j] == 0){
                queue[rear++] = j;
            }
        }
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
    bfs(start, am, visited, n);
    return 0;
}