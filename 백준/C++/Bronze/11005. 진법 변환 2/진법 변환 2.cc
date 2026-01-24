#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<char> result;

    int num=0, b=0;
    int share=0, remain=0;  //몫, 나머지
    char buffer;
    cin>> num>> b;


    while(num!=0){
        share = num/b;
        remain = num%b;
        buffer = remain;

        if(remain>=10){
            buffer += 55;
        }else {
            buffer += 48;
        }
        result.push(buffer);
        num = share;
    }
    while(!result.empty()){
        cout << result.top();
        result.pop();
    }


    return 0;
}

