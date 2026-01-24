#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n=0,m=0;
vector <vector<int>> map;
vector <vector<bool>> visited;

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y){
    visited[x][y] = 1;

    for(int i=0;i<8;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0|| ny<0|| nx>=n ||ny>=m) continue;
        if(!visited[nx][ny]&& map[nx][ny]){
            visited[nx][ny]=1;
            dfs(nx, ny);
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    while(1){
        cin >> m>>n;
        if(n==0&& m==0) break;
        else {
            map.assign(n,vector<int>(m,0));
            visited.assign(n,vector<bool>(m,0));
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin >> map[i][j];
                }
            }
            int cnt=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(map[i][j]==1 && !visited[i][j]){
                        dfs(i,j);
                        cnt++;
                    }
                }
            }
            cout << cnt << '\n';


        }
    }

    return 0;

}
