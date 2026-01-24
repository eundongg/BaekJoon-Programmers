#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int arr[1001] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int sum = 0, result =0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j <= i; j++) {
			sum += arr[j];
		}
		result += sum;
	}
	cout << result;
	
	return 0;
}