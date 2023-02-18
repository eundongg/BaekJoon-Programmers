#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[10000] = { 0 };

void check(int start) {

    int result[2] = { 0 };
    int min = 10000;
    for (int i = n/2; i >=2; i--) {
        if (arr[i] == 0) continue;
        int cnt = 0;
        for (int j = i; j <= n; j++) {
            cnt++;
            if (n < arr[j]) break;
            if (min <= cnt) break;
            if (arr[i] + arr[j] == n) {
                if (cnt < min) {
                    min = cnt;
                    result[0] = arr[i];
                    result[1] = arr[j];
                }

            }
        }
    }

    cout << result[0] << ' ' << result[1] << '\n';
}

int main() {

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;

    for (int i = 2; i <= 10000; i++) {
        arr[i] = i;
    }

    for (int i = 2; i <= 10000; i++) {
        if (arr[i] == 0) continue;
        else {
            for (int j = i * 2; j <= 10000; j += i) {
                arr[j] = 0;
            }
        }
    }

    while (t > 0) {
        cin >> n;
        check(n);
        t--;
    }
    return 0;
}