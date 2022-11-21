#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int num[1001] = { 0 };

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	for (int i = 0; i < n; i++) {
		cout << num[i] << "\n";
	}

	return 0;
}