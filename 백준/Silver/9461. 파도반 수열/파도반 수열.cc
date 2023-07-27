#include <iostream>
using namespace std;

long long int dp[102] ={1,1,1};
long long int Dynamic(int n){
    long long int result =0;

    for(int i=3;i<=100;i++){
        dp[i] = dp[i-2]+ dp[i-3];
    }
    result = dp[n-1];

    return result;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=0, n=0;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        if(n==1 || n==2 ||n==3){
            cout << dp[n-1] << '\n';
        }
        else cout << Dynamic(n) << '\n';
    }

    return 0;
}
