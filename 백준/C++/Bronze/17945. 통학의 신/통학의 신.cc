#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	
	for (int i = -1000; i <= 1000; i++) {
		if ((i * i) + (2 * a * i) + b == 0) cout << i<< ' ';
	}
	
	return 0;
}