#include <iostream>
#include <vector>
using namespace std;

int num[8]={0};
bool visited[8]={0};
int result, n;
vector <int> v;

void dfs(int cnt){
    if(cnt == n){
        int dat = 0;
        for(int j=0;j<n-1;j++){
            dat += abs(v[j]-v[j+1]);
        }
        if(result < dat){
            result = dat;
        }
    }
    for(int i=0;i<n;i++){
        if(visited[i]){
            continue;
        }
        visited[i]=1;
        v.push_back(num[i]);
        dfs(cnt+1);
        visited[i]=0;
        v.pop_back();
    }

}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    dfs(0);
    cout << result << '\n';

    return 0;
}
