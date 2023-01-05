#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n;
	int arr[500001] = { 0 }, brr[500001] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> brr[i];
		if (binary_search(arr, arr + n, brr[i])) {
			cout << 1 << ' ';
		}
		else cout << 0 << ' ';		
	}
	return 0;
}