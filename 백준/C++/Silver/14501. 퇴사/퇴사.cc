#include <iostream>
using namespace std;

int allDay; //전체 상담 일정
int totalMax = 0;   // 최종 최댓값
int counseling[16]={0}, pay[16]={0};    // 상담 횟수와 급여 저장할 배열

void backTracking(int start, int sum){

    if(start>allDay){   // 시작일이 전체 일정보다 넘을 경우
        totalMax = max(totalMax,sum);   // 두 변수 중 큰 값 저장
        return;
    }

    if(start+counseling[start]<=allDay+1){ // 전체상담일정+1보다 작거나 같은 경우만 백트래킹
        backTracking(start+counseling[start],sum+pay[start]);
    }

    backTracking(start+1,sum);  // 탐색을 끝내고 현재 날짜의 다음날부터 백트래킹
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> allDay;


    for(int i=1;i<=allDay;i++){  // 상담 횟수과 급여 입력받음
        cin >> counseling[i] >> pay[i];
    }
    backTracking(1,0);  // 시작일 1, sum 0

    cout << totalMax;

    return 0;
}