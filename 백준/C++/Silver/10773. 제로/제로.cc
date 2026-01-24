#include <iostream>
#include <stack>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int num=0;
    stack<int> s;
    int sum=0;
    for(int i=0;i<n;i++){   //n번 만큼의 입력을 수행 할 반복문
        cin >> num;
        if(num!=0){ // 입력이 0이 들어오면
            s.push(num);    // 스택에 push
        }
        else{   // 0이 아닌 값이 들어오면
            s.pop();    // 스택 pop
        }
    }
    while(!s.empty()){  // 스택이 비어있지 않다면
        sum += s.top(); // top에 위치한 값을 더해 줌
        s.pop();    // 더한 값은 pop
    }
    cout << sum;
    
    return 0;
}