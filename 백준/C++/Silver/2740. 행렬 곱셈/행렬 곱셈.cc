#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, k;
	cin >> n >> m;
	int arr[101][101] = { 0 }, brr[101][101] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> brr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			int result = 0;
			for (int s = 0; s < m; s++) {
				result += arr[i][s] * brr[s][j];
			}
			cout << result << ' ';
		}
		cout << '\n';
	}	

	return 0;
}