#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[201][4]={0};

    int num=0;
    cin >> num;
    int player[201]={0};

    for(int i=0;i<num;i++){
        for(int j=0;j<3;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<num;j++){
            int cnt=0;
            for(int k=0;k<num;k++){
                if(arr[j][i]==arr[k][i]&& j!=k){
                    cnt = 1;
                    break;
                }
            }
            if(!cnt){
                player[j] += arr[j][i];
            }
        }
    }
    for(int i=0;i<num;i++){
        cout << player[i]<< '\n';
    }
    return 0;
}