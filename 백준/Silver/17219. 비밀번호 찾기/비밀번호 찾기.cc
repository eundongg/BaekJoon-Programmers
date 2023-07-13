#include <iostream>
#include <map>
using namespace std;
map<string, string> mapset;
int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n=0,m=0;
    cin >> n>> m;
    string link, password;
    for(int i=0;i<n;i++){
        cin >> link >> password;
        mapset.insert(make_pair(link,password));
    }
    for(int i=0;i<m;i++){
        cin >> link;
        cout << mapset.find(link)->second << '\n';
    }


    return 0;
}

