#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	int arr[1000001];
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + n);
		cout << arr[0] << ' ' << arr[n-1] << '\n';
	}

	return 0;
}