#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	string A, B;
	cin >> A >> B;
	string total_num[17];

	int j = 1, k = 1;
	int result = 0;

	for (int i = 0; i < 16; i++) {
		if (i == 0) total_num[i] = A[0];
		if (i == 1) total_num[i] = B[0];
		if (i >= 2) {
			if (i % 2 == 0) {
				total_num[i] = A[j];
				j++;
			}
			else if (i & 2 != 0) {
				total_num[i] = B[k];
				k++;
			}
		}		
	}
	int dp[16] = { 0 };
	for (int i = 0; i < 16; i++) {
		dp[i] = stoi(total_num[i]);
	}

	int dp_buffer[16] = { 0 };
	int size = sizeof(dp) / sizeof(*dp);
	while (1) {
		
		for (int i = 0; i < size-1 ; i++) {
			dp_buffer[i] = dp[i] + dp[i+1];
			if (dp_buffer[i] >= 10) dp_buffer[i] = dp_buffer[i] % 10;
			dp[i] = dp_buffer[i];
			
		}size--;

		if (size == 2) {
			result = (dp[0] * 10) + dp[1];
			if (result < 10) {
				cout << 0 << result;
				return 0;
			}
			else cout << result;
			return 0;
		}
		else continue;
	}
	
	return 0;
}