#include <iostream>
using namespace std;

int main() {

    string word;
    cin >> word;
    int i = 0;
    int j = word.size() - 1;

    while (1) {
        if (word[i] != word[j]) {
            cout << 0;
            return 0;
        }
        else {
            i++;
            j--;
        }
        if (i >= j) {
            break;
        }
    }
    cout << 1;

    
    return 0;

}