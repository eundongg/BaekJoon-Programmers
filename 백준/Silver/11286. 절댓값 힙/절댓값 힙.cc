#include <iostream>
#include <queue>
using namespace std;

struct Compare{
    bool operator()(int a, int b){
        if(abs(a)==abs(b)){
            return a>b;
        }
        else return abs(a) > abs(b);
    }
};
priority_queue <int,vector<int>,Compare> pq;


int main(){

    //ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0, x=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        if(x==0 && pq.empty()) cout << 0 << '\n';
        else if(x!=0){
            pq.push(x);
        }
        else if(x==0 && !pq.empty()){
            cout << pq.top() << '\n';
            pq.pop();
        }
    }


    return 0;
}

