#include <iostream>
#include <vector>
using namespace std;

int total=0, target1=0,target2=0,linkNum=0;
vector<vector<int>> graph;
vector<bool> visited;
int answer=-1;

void dfs(int start, int cnt) {
    if(start == target2){
        answer = cnt;
        return;
    }
    visited[start]= true;

    for(int i=0;i<graph[start].size();i++){
        int next = graph[start][i];
        if(!visited[next]){
            dfs(next, cnt+1);
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> total >> target1 >> target2 >> linkNum;
    graph.assign(total+1, vector<int>());
    visited.assign(total+1, false);
    int p1=0, p2=0;
    for(int i=0;i<linkNum;i++){
        cin >> p1 >> p2;
        graph[p1].push_back(p2);
        graph[p2].push_back(p1);
    }

    dfs(target1,0);
    
    cout << answer;

    return 0;

}
