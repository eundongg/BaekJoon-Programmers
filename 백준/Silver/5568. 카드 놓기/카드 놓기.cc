#include <iostream>
#include <vector>
#include <set>
#include <string>
using namespace std;

int n=0, k=0;
vector <int> v;
bool visited[7]={0};
set <string> s;

void select(int cnt, string combinedStr){

    if(cnt==k){
        s.insert(combinedStr);
        return;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            visited[i]=1;
            select(cnt+1, combinedStr+ to_string(v[i]));
            visited[i]=0;
        }

    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n>> k;
    v.resize(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    select(0,"");

    cout << s.size();

    return 0;

}
