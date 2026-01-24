#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;
    bool zeroFlag = false;
    bool oneFlag = false;
    int zeroCount=0, oneCount = 0;

    for(int i=0;i<str.size();i++){
        if(str[i]=='0' && !zeroFlag){
            zeroCount++;
            zeroFlag = true; // 0이 연속으로 나오는 경우
            oneFlag = false;
        }
        else if(str[i]=='1'&& !oneFlag){
            oneCount++;
            oneFlag = true; // 1이 연속으로 나오는 경우
            zeroFlag = false;
        }
        else continue;
    }
    int result = min(zeroCount, oneCount);
    // cout << zeroCount << ' ' << oneCount << endl;
    cout << result;

    return 0;
}
