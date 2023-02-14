#include <iostream>
#include <vector>
using namespace std;

int n,m;
vector <int> v;
bool visited[9] = {0, };

void dfs(int cnt){
    if(cnt == m){
        for(int i=0;i<m;i++){
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            visited[i]=true;
            v.push_back(i);
            dfs(cnt+1);
            v.pop_back();
            visited[i]=false;
            
        }
    }
}
int main(){
    
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin >> n>> m;
    dfs(0);
    return 0;
}