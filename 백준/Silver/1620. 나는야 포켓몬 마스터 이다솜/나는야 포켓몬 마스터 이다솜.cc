#include <iostream>
#include <map>
using namespace std;

string pokemonName[100001];
map<string,int> mapset;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int pokemonNum=0, targetNum=0;  // 도감 등록 개수, 맞춰야 하는 문제의 개수
    string input;  // 입력 변수
    cin >> pokemonNum>> targetNum;

    for(int i=0;i<pokemonNum;i++){
        cin >> input;
        mapset.insert(make_pair(input, i));
        pokemonName[i] = input;
    }

    for(int i=0;i<targetNum;i++){
        cin >> input;

        if(isdigit(input[0])){  // 입력이 숫자인지 확인하는 함수 isdigit()
            // 입력값이 숫자면 0이외의 값, 숫자가 아니면 0을 반환
            cout << pokemonName[stoi(input)-1] << '\n';
        }
        else {
            cout << mapset.find(input)->second+1 << '\n';
        }
    }

    return 0;
}

