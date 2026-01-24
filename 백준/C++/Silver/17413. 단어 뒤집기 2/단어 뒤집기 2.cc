#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string sen, result;
    bool inTag = false; // 태그 내부 판단용
    getline(cin, sen);

    stack<char> s;

    for(char ch:sen){
        if(ch =='<'){
            while(!s.empty()){
                cout << s.top();
                s.pop();
            }
            cout << '<';
            inTag = true;
        }else if(ch=='>'){
            inTag = false;
            cout << '>';
        }else if(inTag){
            cout << ch;
        }else if(ch==' '){
            while(!s.empty()){
                cout << s.top();
                s.pop();
            }
            cout << ' ';
        }else{
            s.push(ch);
        }
    }
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }

    return 0;
}
