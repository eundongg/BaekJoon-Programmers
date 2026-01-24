#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    int arr[101]={0};
    for (int i = 1; i <= 100; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < m; i++) {
        
        int a, b;
        cin >> a >> b;
        swap(arr[a], arr[b]);
        
    }

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;

}