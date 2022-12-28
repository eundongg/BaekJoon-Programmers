#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int arr[11] = { 0 };
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + 10);
		cout << arr[7]<< '\n';
	}

	return 0;
}