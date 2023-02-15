#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;
vector<bool> visited;
int n, m;

int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    for (int i = 0; i < n; i++) {
        if (i < m) {
            visited.push_back(true);
        }
        else {
            visited.push_back(false);
        }
    }

    do {
        for (int i = 0; i < v.size(); i++) {
            if (visited[i]) {
                cout << v[i] << ' ';
            }
        }
        cout << '\n';
    } while (prev_permutation(visited.begin(), visited.end()));


    return 0;
 }