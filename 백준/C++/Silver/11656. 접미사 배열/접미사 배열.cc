#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    cin >> word;
    int wordSize = word.size();
    string arr[1001];
    for(int i=0;i<word.size();i++){
        arr[i] = word.substr(i,wordSize);
        wordSize--;
    }
    sort(arr, arr+word.size());

    for(int i=0;i<word.size();i++){
        cout << arr[i] << '\n';
    }

    return 0;
}
