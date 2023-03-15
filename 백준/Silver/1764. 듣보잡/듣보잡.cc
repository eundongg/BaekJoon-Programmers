#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n,m;
    cin >> n>> m;
    string unheard[500001];
    string unseen[500001];
    vector <string> n_name;

    int cnt=0;
    for(int i=0;i<n;i++){
        cin >> unheard[i];
    }
    sort(unheard, unheard+n);
    for(int j=0;j<m;j++){
        cin >> unseen[j];
        if(binary_search(unheard, unheard+n,unseen[j])){
            cnt++;
            n_name.push_back(unseen[j]);
        }
    }
    sort(n_name.begin(), n_name.end());
    cout << cnt << '\n';

    for(int i=0;i<n_name.size();i++){
        cout << n_name[i] << '\n';
    }

    return 0;
}