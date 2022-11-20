#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int r = a % b;
	while (r != 0) {
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
int main(void) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	int a, b;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << lcm(a, b) << "\n";
	}
	
	return 0;
}