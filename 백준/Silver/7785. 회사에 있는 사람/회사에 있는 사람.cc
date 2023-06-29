#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set <string> s;
    set <string>::iterator it;
    int totalLog=0;
    string name, input;

    cin >> totalLog;
    while(totalLog>0){
        cin >> name>> input;
        if(input == "enter"){
            s.insert(name);
        }
        else {
            s.erase(name);
        }
        totalLog--;
    }
    for(auto it=s.rbegin();it!=s.rend();it++){
        cout << *it << '\n';
    }

    return 0;
}

