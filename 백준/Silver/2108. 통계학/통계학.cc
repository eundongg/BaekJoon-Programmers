#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int n, sum = 0;
int num[500000] = { 0 };
int freq[500000] = { 0 };
int cnt=0,m=0,result=0;

double arithmeticMean() {
    double arithMean = (double)sum / n; // (sum/n)을 처음에 double로 맞춰놔야 doubble변수에 저장된다!!

    //소수 n번째 -> 10^(n-1)을 곱하고 나눠주면 됨
    result = round(arithMean);  // return값을 그대로 round(arithMean)으로 넘겨주면 
    // (0 + 0 + (-1)) / 3 = -0.333333...에서 0이 결과값으로 나와야 하지만, -0으로 출력됨
    // int로 변수에 저장하고 출력하면 0이 나옴
    return result;
}
int mode() {
    for (int i = 0; i <= 8000; i++) {
        
        if (freq[i] > cnt) {    //가장 작은 최빈값 구하기
            m = i;
            cnt = freq[i];
        }
    }
    for (int i = m+1; i <= 8000; i++) { // 두 번째로 작은 최빈값 구하기
        if (freq[i] == cnt) {
            m = i;
            break;
        }
    }
    m = m-4000;

    return m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
  
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        sum += num[i];

        freq[num[i] + 4000]++;
    }
    sort(num, num + n);
    
    cout << arithmeticMean() << '\n';
    cout << num[(n-1) / 2] << '\n'; // 0부터 입력을 받았으니 n/2가 아니라 (n-1)/2 구나..
    cout << mode() << '\n';
    cout << num[n-1] - num[0] << '\n';


    return 0;
}