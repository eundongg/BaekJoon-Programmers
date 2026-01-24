#include <iostream>
#include <string>
using namespace std;

int main() {

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    string str;
    cin >> str;
    string buffer;  // stoi하기 전의 string형 숫자를 저장
    bool isMinus=false;
    int result = 0;

    for (int i = 0; i <= str.size(); i++) {
        if ('0' <= str[i] && str[i] <= '9') { //아스키 48 = '0' ~ 57 = '9'
            buffer += str[i];  // 숫자라면 하나씩 추가 -> 한꺼번에 stoi 사용
        }
        else if (str[i] == '-' || str[i] == '+'|| i == str.size()) {
            if (isMinus) {
                result -= stoi(buffer);
                buffer = "";
            }
            else {
                result += stoi(buffer);
                buffer = "";
            }
        }
        if (str[i] == '-') isMinus = true;
       
        
    }
    cout << result;

    return 0;
}