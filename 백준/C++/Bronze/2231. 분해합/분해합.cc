#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	int result = 0;
	
	for (int i = 1; i < n; i++) {

		int sum = i;
		int split = i;

		while (split) {
			sum += split % 10;
			split /= 10;
		}

		if (sum == n) {
			result = i;
			break;
		}

	}
	cout << result;


	return 0;

}