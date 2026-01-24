#include <iostream>
#include <queue>
using namespace std;


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=0, n=0, target=0, num=0;  // 테케, 문서의 개수, 타겟 문서, 중요도
    cin >> t;
    for(int i=0; i < t; i++){
        cin >> n >> target;
        queue <pair<int,int>> q;
        priority_queue <int> pq;
        for(int j=0;j<n;j++){
            cin>> num;
            q.push(make_pair(j,num));
            pq.push(num);
        }
        int cnt=0;
        while(!q.empty()){
            int index = q.front().first;
            int priority = q.front().second;

            if(pq.top() > priority){
                q.push(make_pair(index, priority));
                q.pop();
            }
            else {
                cnt++;
                q.pop();
                pq.pop();
                if(index == target){
                    cout << cnt << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}

