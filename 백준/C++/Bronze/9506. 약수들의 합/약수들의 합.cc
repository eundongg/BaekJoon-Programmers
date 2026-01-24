#include <iostream>
#include <vector>
using namespace std;

int main() {

    int num;
    while(1){

        vector<int> divisor;    // 약수를 저장할 배열
        divisor.clear();    // 매 시작마다 벡터 초기화

        int total =0;    //입력한 숫자와 약수들의 합이 같은지 확인할 변수

        cin >> num;
        if(num == -1) break;
        for(int i=1;i<num;i++){
            if((num%i)==0){    // 약수라면
                divisor.push_back(i);       // 벡터에 push
                total += i;    // 총합에 더해줌
            }
        }
        if(total==num){    // 약수들의 총합과 입력한 숫자가 같다면
            cout << num << " = ";
            for(int i=0;i<divisor.size();i++){
                if(i==divisor.size()-1){    // 맨 끝 숫자라면
                    cout << divisor[i];
                }
                else cout << divisor[i] << " + ";
            }
            cout << '\n';
        }
        else {
            cout << num << " is NOT perfect." << '\n';
        }
    }
    return 0;

}