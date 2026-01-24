#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k;
	cin >> n >> k;
	int a, b, c;
	int A[1001] = { 0 }, B[1001] = { 0 }, C[1001] = { 0 };
	int total[1001] = { 0 };
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		if (num == k) {
			cin >> a >> b >> c;
		}
		else {
			cin >> A[i] >>B[i] >> C[i];
		}		
	}
	int rank = 0;
	for (int i = 1; i < n; i++) {
		if (A[i] > a) rank++;
		else if (A[i] == a && B[i] > b) rank++;
		else if (A[i] == a && B[i] == b && C[i] > c) rank++;
	}
	cout << rank+1;

	return 0;
}