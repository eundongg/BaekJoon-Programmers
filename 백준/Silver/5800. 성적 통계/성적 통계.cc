#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
	cin >> n;
	int arr[50] = { 0 }, brr[50] = { 0 };
	for (int i = 1; i <= n; i++) {
		cin >> m;
		for (int j = 0; j < m; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + m, greater<>());
		for (int j = 0; j < m - 1; j++) {
			brr[j] = arr[j] - arr[j+1];
		}
		sort(brr, brr + (m - 1));
		cout << "Class " << i << '\n';
		cout << "Max " << arr[0] << ", Min " << arr[m-1] << ", Largest gap " << brr[m-2]<<'\n';
	}

	return 0;
}