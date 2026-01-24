#include <iostream>
#include <string>
using namespace std;

int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    string n;
    cin >> n;
    int buffer[4] = { 0 };
    int cnt=0;

    if (stoi(n) < 100) {
        cnt += stoi(n);
    }
    else {
        cnt += 99;
        for (int i = 100; i <= stoi(n); i++) {
            string s = to_string(i);
            int buffer = s[0] - s[1];
            for (int j = 1; j < s.size()-1; j++) {
                if (buffer != s[j] - s[j+1]) break;
                else cnt++;
            }
        }
    }
    cout << cnt;
    
    return 0;
 }