#include <iostream>
using namespace std;
int n;
int arr[246912] = { 0 };


void eratos(int start) {
    int cnt = 0;
    for (int i = 2; i <= 2 * start; i++) {
        arr[i] = i;
    }

    for (int i = 2; i <= 2*start; i++) {
        if (arr[i] == 0) continue;  
        for (int j = i * 2; j <= 2*start; j += i) { 
            arr[j] = 0;
        }
    }

    for (int i = start+1; i <= 2 * start; i++) {
        if (arr[i] != 0) cnt++; 
    }
    cout << cnt << '\n';
}
int main() {

    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    while (1) {
        cin >> n;
        if (n == 0) break;
        else eratos(n);
    }
    return 0;
}