#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[3]={0};
    while(1){
        cin >> arr[0]>> arr[1]>> arr[2];
        sort(arr, arr+3);
        if(arr[0]==0&& arr[1]==0&&arr[2]==0) {
            return 0;
        }
        else {
            if(arr[2]<(arr[0]+arr[1])){
                if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[0]==arr[2]){
                    cout << "Equilateral" << '\n';
                }
                else if((arr[0]!=arr[1]&&arr[1]!=arr[2]&&arr[0]==arr[2])
                ||(arr[0]!=arr[1]&&arr[1]==arr[2]&&arr[0]!=arr[2])
                ||(arr[0]==arr[1]&&arr[1]!=arr[2]&&arr[0]!=arr[2])) {
                    cout << "Isosceles" <<'\n';
                }
                else if(arr[0]!=arr[1]&&arr[1]!=arr[2]&&arr[0]!=arr[2]){
                    cout << "Scalene"<<'\n';
                }
            }
            else cout << "Invalid"<<'\n';


        }

    }

}