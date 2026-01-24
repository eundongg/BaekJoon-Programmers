#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int arr[51] = { 0 }, brr[51] = { 0 };

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> brr[i];
	}
	sort(arr, arr + n);
	sort(brr, brr + n, greater<>());

	int result = 0;
	for (int i = 0; i < n; i++) {
		result += (arr[i] * brr[i]);
	}
	cout << result;

	return 0;
}