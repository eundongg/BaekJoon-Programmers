#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> graph[1001];
vector <bool> visited;

void dfs(int node){
    visited[node]=1;

    for(int i=0;i<graph[node].size();i++){
        int next = graph[node][i];
        if(!visited[next]){
            dfs(next);
        }
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0, link=0;
    cin >> n>> link;

    visited.assign(n,0);

    int n1=0, n2=0;
    for(int i=0;i<link;i++){
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    int components=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i);
            components++;
        }
    }

    cout << components;

    return 0;

}
