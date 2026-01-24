#include <iostream>
#include <cmath>    //pow
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int rectangle[51][51];
    int n, m;
    int Max = 1, result=1;
    cin >> n >> m;
   
    char num;

    for (int i = 0; i < n; i++) {    // 정사각형 채우기
        for (int j = 0; j < m; j++) {
            cin >> num;
            rectangle[i][j]= num-'0';
        }
    }

    Max = n < m ? n : m;    // 정사각형이니까 가로 세로 중 제일 작은 값이 최대의 변을 가질 수 있음

    for (int k = 1; k < Max ;k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j + k >= m || i + k >= n) break;
                if (rectangle[i][j] == rectangle[i + k][j + k]) {
                    if (rectangle[i][j] == rectangle[i + k][j]) {
                        if (rectangle[i][j] == rectangle[i][j + k]) {
                            result = pow(k + 1, 2);
                        }
                    }
                }

            }
        }
    }
    cout << result;
    return 0;
}