#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector <int> v;
int arr[8]={0};
bool visited[8][8];

void dfs(int cnt, int start){
    if(cnt==m){
        for(int i=0;i<v.size();i++){
            cout << v[i]<<' ';
        }
        cout << '\n';
        return;
    }
    for(int i=start;i<n;i++){
        if(visited[cnt][i])continue;
        visited[cnt][i] = true;
        v.push_back(arr[i]);
        dfs(cnt+1,arr[i]-1);
        visited[cnt][i]=false;
        v.pop_back();
    }
}

int main(){
    cin >> n>> m;
    
    for(int i=0;i<n;i++){
        arr[i] = i+1;
    }
    dfs(0,0);
    return 0;
}