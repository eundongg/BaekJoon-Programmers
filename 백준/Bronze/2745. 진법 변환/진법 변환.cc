#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string num;
    int b, sum =0;

    cin >> num>> b;
    int check = num.size();

    for (int i=0;i<num.size();i++){
        check--;
        if(num[i]>='0' && num[i]<='9'){
            num[i] = num[i] - '0';
        }
        else {
            num[i] = num[i]+10-'A';
        }
        sum += (num[i]*(pow(b,check)));
    }
    cout << sum;


    return 0;
}

