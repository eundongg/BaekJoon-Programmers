#include <iostream>
using namespace std;

int arr[1000001]={0};  // 소수 판별 저장용 배열
int t, num;    // 입력 받을 변수

void check_Partition(int start){ // 파티션 개수 체크 
    
    int difCnt =0;  // 개수 체크할 변수 초기화
    for(int i=2;i<=start/2;i++){
        if(arr[i]+arr[start-i]==start) difCnt++;
    }


    cout << difCnt << '\n';
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>> t;    // 테스트 케이스의 개수 입력

    // 에라토스테네스의 체
    // 1. 배열 생성 후 초기화
    for(int i=2;i<=1000000;i++){
        arr[i]=i;
    }
    // 2. 2부터 시작해서 특정 수의 배수에 해당하는 수를 모두 지움
    for(int i=2;i<=1000000;i++){
        if(arr[i]==0) continue;
        else {
            for(int j=i*2;j<=1000000;j += i){  // 자기 자신 제외하고 배수부터 차례로 제외
                arr[j]=0;
            }
        }
    }

    while(t>0){
        cin >> num;
        check_Partition(num);
        t--;
    }

    return 0;
}