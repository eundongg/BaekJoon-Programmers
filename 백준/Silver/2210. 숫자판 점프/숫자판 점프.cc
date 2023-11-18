#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<vector<int>> graph;
vector<vector<bool>> visited;
set<int> result;

int dx[4]= {0,1,0,-1};
int dy[4]={1,0,-1,0};

void dfs(int x,int y, int current,int cnt){
    if(cnt==6){
        result.insert(current);
        return;
    }

    for(int i=0;i<4;i++){
        int nx = x+ dx[i];
        int ny = y+ dy[i];

        if(nx<0||ny<0||nx>=5||ny>=5) continue;
        if(!visited[nx][ny]) {
            dfs(nx,ny,current*10+graph[nx][ny], cnt+1);
        }
    }

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    graph.assign(5, vector<int>(5,0));
    visited.assign(5,vector<bool>(5,0));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> graph[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            dfs(i,j,0,0);
        }
    }
    cout << result.size();

    return 0;

}
