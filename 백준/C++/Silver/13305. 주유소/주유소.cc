#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	int kilometer[10000] = { 0 };
	int gasStation[10000] = { 0 };
	long long total_fee = 0;
	for (int i = 0; i < n - 1; i++) {
		cin >> kilometer[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> gasStation[i];
	}

	int min = gasStation[0];
	long long total_K = 0;
	for (int i = 1; i < n; i++) {

		total_K += kilometer[i-1];	// 기존의 주유소보다 저렴한 주요소가 있을 때까지 더함

		if (gasStation[i] <= min) {	//  더 저렴한 주유소가 나왔을 경우	
			total_fee += total_K * min;	// 여태까지 더한 거리와 주유소 최솟값 곱함
			min = gasStation[i];	// min값 변경
			total_K = 0;	// 키로수 비우기
		}
		if (i == (n - 1)) {	// 주유소가 5 4 6 처럼 min값보다 더 큰 값이 나올 수 있기 때문에 조건식 적용 
			total_fee += total_K * min;
		}		
	}
	cout << total_fee;
	
	return 0;
}