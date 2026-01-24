#include <iostream>
#include <vector>
#include <string>
using namespace std;

string n,division;
int result=0;
int k;
void dfs(vector <int> v){
    
    if(division.size()>0 && stoi(n)>=stoi(division)){
        result = max(result, stoi(division));
    }
    if(division.size()==n.size()){
        return;
    }
    
    for(int i=0;i<v.size();i++){
        division += to_string(v[i]);
        dfs(v);
        division.pop_back();
    }
        
}
int main(){
    cin >> n>> k;
    vector<int> v(k);
    
    for(int i=0;i<k;i++){
        cin >> v[i];
    }
    dfs(v);
    cout << result;
    return 0;
}
