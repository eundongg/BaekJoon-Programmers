#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0, m=0, k=0; // n*m 배열, 좌표받을 개수의 변수
    int arr[302][302] = {0};
    cin >> n>> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> arr[i][j];
        }
    }
    cin >> k;
    for(int i=0;i<k;i++){
        int total=0;    // 총 누적합
        int x1=0, y1=0, x2=0, y2=0;  // 좌표 두 개 받을 변수
        cin >> x1 >> y1 >> x2 >> y2;
        for(int r=y1;r<=y2;r++){
            for(int j=x1;j<=x2;j++){
                total += arr[j][r];
            }
        }
        cout << total << '\n';
    }

    return 0;
}
