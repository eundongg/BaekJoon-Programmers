#include <iostream>
#include <vector>
using namespace std;

int k=0;
vector <int> nums;
vector <int> arr;

void combination(int cnt,int next){
    if(cnt == 6){
        for(int i=0;i<6;i++){
            cout << nums[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=next;i<=k;i++){
        nums.push_back(arr[i]);
        combination(cnt + 1,i+1);
        nums.pop_back();

    }
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        cin >> k;
        if(k==0){
            return 0;
        }
        else {
            arr.resize(k);
            for(int i=1;i<=k;i++){
                cin >> arr[i];
            }
            combination(0,1);
        }
        cout << '\n';
    }
}
