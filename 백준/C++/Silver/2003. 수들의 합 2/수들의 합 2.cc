#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0, m=0, cnt=0; // 배열의 크기, 타겟, 타겟 카운트
    cin >> n>> m;
    int arr[10001]={0};

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        int total = 0;
        for(int j=i;j<n;j++){
            total += arr[j];
            if(total == m) cnt++;
            else continue;
            if(total>m) break;
        }
    }
    cout << cnt;


    return 0;
}
