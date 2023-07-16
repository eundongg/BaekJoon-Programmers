#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0, cnt=0;
    cin >> n;


    while(n>=5){
        cnt += n/5;
        n/=5;
    }
    cout << cnt;

    return 0;
}

