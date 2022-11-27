#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a, b, c;
	cin >> a >> b >> c;
	int max = 0;
	int arr[81] = { 0 };
	int index = 0;

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= c; k++) {
				arr[i + j + k]++;
			}
		}
	}
	for (int i = 3; i < a + b + c; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	
	cout << index;
	return 0;

}