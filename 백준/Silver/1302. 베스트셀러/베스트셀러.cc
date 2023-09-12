#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

map<string, int> mapset;
void Check(string word){
    if(mapset.find(word) != mapset.end()){
        mapset[word]++;
    }
    // find()함수는 키를 찾으면 키가 있는 위치를 가리키는 반복자(iterator)를 반환하고,
    // 키를 찾지 못하면 end를 가리키는 반복자를 반환한다는 성질을 이욯하여 이미 존재하는 키인지 판단
    else {
        mapset[word] = 1;
    }
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0;
    string bookName;
    cin >> n;

    while(n>0){
        cin >> bookName;
        Check(bookName);
        n--;
    }
    // cout << max_element(mapset.begin(), mapset.end());
    // 위의 식이 출력되지 않는 이유는 map은 key를 기준으로 정렬되어 있고,
    // max_element함수는 범위 내에서 가장 큰 값을 찾는 것이기 때문
    // map에서 가장 큰 값을 찾기 위해서는 루프를 이요하여 모든 요소를 순회하여야 함
    int max_value = 0;
    string max_key;
    for(auto pair:mapset){
        if(pair.second>max_value){
            max_value = pair.second;
            max_key = pair.first;
        }
    }
    cout << max_key;

    return 0;
}
