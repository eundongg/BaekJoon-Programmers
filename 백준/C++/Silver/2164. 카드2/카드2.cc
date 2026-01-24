#include <iostream>
#include <queue>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0;
    cin >> n;
    queue <int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }

    while(q.size()>1){
        q.pop();
        int last = q.front();
        q.pop();
        q.push(last);
    }
    cout << q.front();


    return 0;
}

