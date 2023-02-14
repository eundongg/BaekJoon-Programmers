#include <iostream>
using namespace std;

int main(){

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;    
    int cnt = 0;
    int max = 50;

    for (int i = 0; i <= (b.size() - a.size()); i++) {
        cnt = 0;
        for (int j = 0; j < a.size(); j++) {
            if (a[j] != b[i + j]) cnt++;
        }
        if (max > cnt) max = cnt;
    }
    cout << max;
    return 0;
 }