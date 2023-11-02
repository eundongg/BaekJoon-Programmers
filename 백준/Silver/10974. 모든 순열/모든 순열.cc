#include <iostream>
#include <vector>
using namespace std;

int n=0;
bool visited[9]={0};
vector <int> nums;

void permutation(int cnt){
    if(cnt == n){
        for(int i=0;i<n;i++){
            cout << nums[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=1;i<=n;i++){
        if(!visited[i]){
            nums.push_back(i);
            visited[i]=1;
            permutation(cnt+1);
            nums.pop_back();
            visited[i]=0;
           
        }
    }
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    permutation(0);

    return 0;
}
