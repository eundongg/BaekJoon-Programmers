#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int num = 0;
	int store[10001] = { 0, };

	for (int i = 0; i < n; i++) {
		cin >> num;
		store[num]++;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < store[i]; j++) {
			cout << i << "\n";
		}
	}

	return 0;
}