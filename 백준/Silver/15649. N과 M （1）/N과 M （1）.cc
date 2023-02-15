#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector <int> graph;
int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        graph.push_back(i);
    }

    do {
        for (int i = 0; i < m; i++ ) {
            cout << graph[i] << ' ';
        }
        cout << '\n';
        reverse(graph.begin() + m, graph.end());
    } while (next_permutation(graph.begin(), graph.end()));

    return 0;
 }