#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[1001]={0};
    int brr[1001]={0};
    int num1, num2;

    for(int i=0;i<3;i++){
        cin >> num1 >> num2;
        if(arr[num1]!=0) arr[num1] =0; // 이미 입력된 경우
        else if(arr[num1]==0) arr[num1]= num1; // 입력되지 않은 경우
        if(brr[num2]!=0) brr[num2]= 0;
        else if(brr[num2]==0) brr[num2] = num2;
    }
    sort(arr,arr+1001,greater<>());
    sort(brr, brr+1001,greater<>());

    cout << arr[0] << ' ' << brr[0];

    return 0;

}