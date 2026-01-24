#include <iostream>
#include <vector>
using namespace std;

vector<int> dp(42);

int fib(int n) {
    if (n == 0) {
        dp[0] =0;
        return 0;
    }
    else if (n == 1) {
        dp[1]=1;
        return 1;
    }

    if (dp[n] != 0){
        return dp[n]; // 테이블에 저장된 값이 있따면 그 값을 반환
    }else {
        return dp[n] = fib(n - 1) + fib(n - 2);
    }

}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 0, n = 0;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        if(n==0) {
            cout << 1 << ' ' << 0 << '\n';
        }else {
            fib(n);
            cout << dp[n-1] << ' ' << dp[n] << '\n';
        }
    }

    return 0;
}
