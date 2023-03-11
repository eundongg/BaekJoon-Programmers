#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int A_num,B_num;
    int cnt=0;
    cin >> A_num >> B_num;
    int A[200001]={0};
    int B[200001]={0};

    for(int i=0;i<A_num;i++){
       cin >> A[i];
    }
    int A_size = sizeof(A)/sizeof(int);
    sort(A, A+A_size);
    for(int i=0;i<B_num;i++){
        cin >> B[i];

        if (binary_search(A,A+A_size,B[i])) {
            cnt++;
        }
    }

    cout << (A_num-cnt) + (B_num-cnt);
    return 0;

}