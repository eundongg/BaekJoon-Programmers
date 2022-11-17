#include <iostream>
using namespace std;

int main(void) {

	int a, b, c;
	cin >> a >> b >> c;
	int cnt = 0;
	int k1 = b - a, k2 = c - b;

	if (k1 >= k2) cout << k1 - 1;
	else cout << k2 - 1;
	return 0;
}