#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> map;
vector<vector<bool>> visited;
int n=0;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int dfs(int x, int y){
    visited[x][y]= 1;
    int houseCount =1;

    for(int i=0;i<4;i++){
        int nx = x+ dx[i];
        int ny = y+ dy[i];
        if(nx<0 || nx>=n ||ny<0 || ny>=n||visited[nx][ny]|| map[nx][ny]==0) continue;

        houseCount += dfs(nx,ny);
    }
    return houseCount;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    string str;

    map.assign(n,vector<int>(n,0));
    visited.assign(n,vector<bool>(n,0));
    for(int i=0;i<n;i++){
        cin >> str;
        for(int j=0;j<n;j++){
            map[i][j] = str[j]-'0';
        }
    }

    vector<int> houseCounts;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(map[i][j]==1 && !visited[i][j]){
                houseCounts.push_back(dfs(i,j));
            }
        }
    }
    sort(houseCounts.begin(),houseCounts.end());

    cout << houseCounts.size() << '\n';

    for(int cnt: houseCounts){
        cout << cnt << '\n';
    }

    return 0;

}
