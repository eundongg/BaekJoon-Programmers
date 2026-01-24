#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n=0, m=0;
//bool visited[9]={0};
vector <int> nums;
int arr[9]={0};

void permutation(int cnt){
    if(cnt == m){
        for(int i=0;i<m;i++){
            cout << nums[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=1;i<=n;i++){
        nums.push_back(arr[i]);
        permutation(cnt + 1);
        nums.pop_back();
    }
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n>> m;
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    sort(arr+1, arr+(n+1));
    permutation(0);

    return 0;
}
