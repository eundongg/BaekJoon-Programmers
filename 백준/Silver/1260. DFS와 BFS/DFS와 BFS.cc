#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<vector<int>> graph;
vector<bool> visited;
queue<int> q;
int n, line, start;

void dfs(int cur) {
    visited[cur] = true;
    cout << cur << ' ';
    for (int i = 0; i < graph[cur].size(); i++) {
        int next = graph[cur][i];
        if (!visited[next]) {
            dfs(next);
        }
    }
}

void bfs(int cur) {
    q.push(cur);
    visited[cur] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        for (int i = 0; i < graph[cur].size(); i++) {
            int next = graph[cur][i];
            if (!visited[next]) {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, line, start;
    cin >> n >> line >> start;

    graph.assign(n + 1, vector<int>(0, 0));
    visited.assign(n + 1, false);

    for (int i = 0; i < line; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(start);
    cout << '\n';
    visited.assign(n + 1, false);
    bfs(start);

    return 0;
}