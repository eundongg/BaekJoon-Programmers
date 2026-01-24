#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0, k=0;
    cin >> n>> k;
    vector <int> v(n+1,1);  // 초기화
    for(int i=2;i<=n;i++){
        if(v[i]==1){
            for(int j=i;j<=n;j+=i){
                if(v[j]==1){
                    v[j] = 0;
                    k--;
                }
                if(k==0){
                    cout << j;
                    return 0;
                }
            }
        }

    }

    return 0;
}
