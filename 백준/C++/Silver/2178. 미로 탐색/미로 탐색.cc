#include <iostream>
#include <queue>
#define MAX 101
using namespace std;

int n,m;
int maze [MAX][MAX];    //미로 check
int visited[MAX][MAX];    //방문 처리용
int path[MAX][MAX];    // 얼마나 이동했는지 기록용
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

//미로 경로 탐색
void bfs(int x_start, int y_start){
    // 좌표 저장용 queue
    queue <pair<int,int>> q;
    q.push(make_pair(x_start, y_start));
    visited[x_start][y_start] =1;    // 방문 처리
    path[x_start][y_start]++; //시작 좌표부터 이동 칸 수 1
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++){
            int next_x = x+dx[i];
            int next_y = y+dy[i];
            // 해당 위치가 좌표 내에 존재하는지, 방문한 적이 있는지, 이동이 가능한지 확인
            if((0<=next_x && next_x <n) && (0<=next_y && next_y <m)
              && !visited[next_x][next_y]&& maze[next_x][next_y]==1){
                
                visited[next_x][next_y]=1;
                q.push(make_pair(next_x, next_y));
                path[next_x][next_y]= path[x][y]+1;
                
            }
            
        }
    }
}

int main(){
    cin >> n>> m;
    for(int i=0;i<n;i++){
        string num;
        cin >> num;
        for(int j=0;j<m;j++){
            maze[i][j] = num[j]-'0';
        }
    }
    bfs(0,0);
    cout << path[n-1][m-1];
    return 0;
}