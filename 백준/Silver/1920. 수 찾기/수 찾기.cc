#include <iostream>
#include <algorithm>
using namespace std;

int BinarySearch(int *arr, int match, int n) {

	int middle = 0, result = 0;
	int low = 0, high = n-1;
	while (low <= high) {
		middle = (low + high) / 2;
		if (match == arr[middle]) {
			cout << '1' << "\n";
			return 0;
		}
		else if (match > arr[middle]) {
			low = middle + 1;
		}
		else {
			high = middle - 1;
		}		
	}
	cout << '0' << "\n";
    return 0;
	
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n;
	int arr[100002] = { 0 };

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	cin >> m;

	for (int i = 0; i < m; i++) {
		int match;
		cin >> match;
		BinarySearch(arr, match, n);
	}
	return 0;
}