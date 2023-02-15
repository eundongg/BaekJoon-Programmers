#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;
bool visited[9] = { 0, };
int n, m;

void dfs(int cnt, int idx) {
    if (cnt == m) {
        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                cout << v[i] << ' ';
            }
        }
        cout << '\n';
        return;
    }
    for (int i = idx; i < n; i++) {
        if (!visited[i]) {
            visited[i] = true;
            dfs(cnt + 1, i + 1);
            visited[i] = false;
        }
    }
}
int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }
    dfs(0, 0);  // 카운트, 시작점

    return 0;
 }