#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <vector<int>> tree;
vector <int> parent;

void dfs(int node, int par){
    parent[node]= par;

    for(int child: tree[node]){
        if(child != par){
            dfs(child,node);
        }
    }
    return;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0, node1=0, node2=0;
    cin >> n;
    tree.resize(n+1);
    parent.resize(n+1);
    for(int i=0;i<n-1;i++){
        cin >> node1 >> node2;
        tree[node1].push_back(node2);
        tree[node2].push_back(node1);
    }
    dfs(1,0);

    for(int i=2;i<=n;i++){
        cout << parent[i] << '\n';
    }

    return 0;

}
