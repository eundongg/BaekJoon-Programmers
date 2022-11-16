#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	int mo = 1, ja = 1;

	for (int i = k; i > 0; i--) {
		mo *= n;
		n--;
	}
	for (int i = k; i > 0; i--) {
		ja *= i;
	}
	cout << mo / ja;

	return 0;
}