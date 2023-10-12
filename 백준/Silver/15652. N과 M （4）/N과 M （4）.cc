#include <iostream>
#include <vector>
using namespace std;

int n=0, m=0;
bool visited[9]={0};
vector <int> nums;

void permutation(int cnt, int next){
    if(cnt == m){
        for(int i=0;i<m;i++){
            cout << nums[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=next;i<=n;i++){

        //visited[i] = 1;
        nums.push_back(i);
        permutation(cnt + 1, i);
        //visited[i] = 0;
        nums.pop_back();

    }
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n>> m;
    permutation(0,1);

    return 0;
}
