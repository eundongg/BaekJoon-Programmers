#include <iostream>
using namespace std;

int main() {

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    int arr[1000001] = { 0 };
    
    // 1. 배열 생성 후 초기화
    for (int i = 2; i <= m; i++) {
        arr[i] = i;
    }
    
    // 2. 2부터 시작하여 특정 수의 배수에 해당하는 수를 모두 지움
    for (int i = 2; i <= m; i++) {
        if (arr[i] == 0) continue;  // 이미 비워져 있으면 skip
        for (int j = i * 2; j <= m; j += i) {  // 비워져있지 않다면 그 숫자의 배수부터 출발하여 모두 비움
            arr[j] = 0;
        }
    }

    for (int i = n; i <= m; i++) {
        if (arr[i] != 0) cout << arr[i] << '\n';
    }

    return 0;
}