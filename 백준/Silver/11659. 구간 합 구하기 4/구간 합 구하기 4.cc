#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	int arr[100002] = { 0 };
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		arr[i] = num + arr[i - 1];
	}
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		int sum = arr[b] - arr[a - 1];
		cout << sum << '\n';
	}

	return 0;
}