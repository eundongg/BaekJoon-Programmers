#include <iostream>
#include <queue>
using namespace std;

int m,n,k;
int graph[51][51];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

// 인접 배추 탐색
void bfs(int now_x, int now_y){
    
    // 인접 배추 위치 담을 queue
    queue <pair<int,int>> q;
    q.push(make_pair(now_x, now_y)); // pair 데이터 추가 -> make_pair
    graph[now_x][now_y]=0;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        //상하좌우 인접 배추 모두 탐색
        for(int i=0;i<4;i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];
             // 해당 위치가 배추밭 내부에 있는지 확인
            if(0<=next_x&&next_x<m && 0<=next_y &&next_y<n){
                // 해당 위치에 배추가 있다면
                if(graph[next_x][next_y]==1){
                    graph[next_x][next_y]=0;
                    q.push(make_pair(next_x, next_y));
                }
            }
        }
    }
    
    
    
    
}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> m>> n>> k;
        // 배추 위치 입력
        for(int j=0;j<k;j++){
            int x,y;
            cin >> x>> y;
            graph[x][y]=1;
        }
        int bug =0;
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                if(graph[j][k]==1){
                    bfs(j,k);
                    bug++;
                }
            }
        }
        cout << bug << '\n';
    }
  
}