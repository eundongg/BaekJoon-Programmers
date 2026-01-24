#include <iostream>
using namespace std;

int main() {

    int a,b;

    while(1){
        cin >> a>> b;
        if (a > b) {
            if (a % b == 0) {
                cout << "multiple" << '\n';
            }
            else cout << "neither" <<'\n';
        } else if (a < b) {
            if (b%a == 0) {
                cout << "factor" <<'\n';
            }
            else cout << "neither" <<'\n';
        }else if (a == 0 && b == 0) {
            break;
        }
    }
    return 0;

}