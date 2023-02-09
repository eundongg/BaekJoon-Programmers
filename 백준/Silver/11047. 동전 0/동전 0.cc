#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;
	int money[11] = { 0 };
	while (1) {	//첫 동전의 가치는 1을 입력받아야 함
		cin >> money[1];
		if (money[1] == 1) break;
	}
	for (int i = 2; i <= n; i++) {
		cin >> money[i];
		
		if ((money[i] % money[i - 1]) != 0) i--;	//입력 받은 동전의 가치는 그 전의 배수를 입력받아야 함
	}

	int cnt = 0;
	if (n == 1) { // n이 1인 경우를 생각 못했다..
		cnt += k;
	}
	else {
		while (n>1) {	
			if (money[n] <= k) {	//동전의 가치 중 가장 큰 값이 총 합의 가치보다 크다면
				cnt += (k / money[n]);
				k %= money[n];	
			
			}
			if (money[n - 1] <= k && k < money[n]) {
				cnt += (k / money[n-1]);
				k %= money[n - 1];
				n--;
			}
			else n--;		
		}
	}

	cout << cnt;
	
	return 0;
}