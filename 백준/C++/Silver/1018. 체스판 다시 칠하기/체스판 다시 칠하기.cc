#include <iostream>
using namespace std;
int chess[50][50];

int Check(int x, int y) {
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = x; i < x + 8; i++) {   // 브루트포스
        for (int j = y; j < y + 8; j++) {
            if ((i + j) % 2 == chess[i][j]) cnt1++;   
            if ((i + j + 1) % 2 == chess[i][j]) cnt2++;
        }
    }
    return min(cnt1, cnt2);
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    int low = 2500;
    char c;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {    //B는 0으로, W는 1로 체스판에 저장
        for (int j = 0; j < m; j++) {
            cin >> c;
            if (c == 'B') chess[i][j] = 0;
            else chess[i][j] = 1;
        }
    }
    for (int i = 0; i <= n - 8; i++) {  // 시작 인덱스 Check함수에 전달
        for (int j = 0; j <= m - 8; j++) {
            if (low > Check(i, j)) low = Check(i, j);   // 최솟값인지 확인
        }
    }
    cout << low;
    return 0;
}