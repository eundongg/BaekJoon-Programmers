#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >>n;
    vector <int> v1;
    vector <int> v2;
    for(int i=0;i<n;i++){
        int dot1, dot2;
        cin >> dot1 >> dot2;
        v1.push_back(dot1);
        v2.push_back(dot2);
    }

    int num1 = *min_element(v1.begin(),v1.end());
    int num2 = *max_element(v1.begin(),v1.end());
    int num3 = *min_element(v2.begin(), v2.end());
    int num4 = *max_element(v2.begin(), v2.end());

    cout << (num2-num1) * (num4-num3);
    return 0;

}