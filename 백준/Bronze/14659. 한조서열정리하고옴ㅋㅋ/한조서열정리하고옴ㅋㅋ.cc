#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, height=0,result=0, cnt=0;
	cin >> n;
	int arr[30001] = { 0 };

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	height = arr[0];
	for (int i = 1; i < n; i++) {
		if (height >=arr[i]) {
			cnt++;
		}
		else {
			result = max(result, cnt);
			height = arr[i];
			cnt = 0;
		}
	}
	cout << max(result, cnt);

	return 0;
}