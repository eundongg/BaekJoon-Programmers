#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<pair<int,int>, int> dp;

int Count(map<string, vector<string>>&clothes, int idx, int cnt){
    if(idx == clothes.size())  {
        // 마지막 종류까지 처리한 경우, 조합의 수를 반환
        return cnt;
    }
    if(dp.find({idx,cnt}) !=dp.end()) {
        return dp[{idx, cnt}];
    }

    auto it = clothes.begin();
    advance(it, idx);

    int result = Count(clothes, idx+1, cnt); // 해당 종류를 선택하지 않은 경우
    result += Count(clothes, idx+1, cnt*(it-> second.size()));

    dp[{idx, cnt}]  =result;
    return result;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t=0, n=0; // 테케, 의상 이름과 종류,
    cin >> t;


    for(int i=0;i<t;i++){
        cin >> n;
        map<string ,vector<string>> clothes;
        for(int j=0;j<n;j++){
            string name, type;
            cin >> name >> type;
            clothes[type].push_back(name);
        }
        dp.clear();
        int result = Count(clothes, 0,1)-1;
        cout << result << '\n';
    }


    return 0;
}
