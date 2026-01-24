#include <iostream>
using namespace std;

int Count(int n){
    int dp[11]={1,2,4};

    for(int i=3;i<n;i++){
        dp[i]=dp[i-1] + dp[i-2] +dp[i-3];
    }
    return dp[n-1];
}
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=0, num=0;
    cin >> t;

    for(int i=0;i<t;i++){
        cin >> num;
        int result=Count(num);
        cout << result << '\n';
    }


    return 0;
}
