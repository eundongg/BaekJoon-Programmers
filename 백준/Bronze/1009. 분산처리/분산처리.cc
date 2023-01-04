#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int a, b;
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b;	
		int mul = a % 10;
		for (int j = 1; j < b; j++) {
			mul *= a;
			mul %= 10;
		}
		if (mul == 0) cout << 10 << '\n';
		else cout << mul << '\n';
		
	}	
	return 0;
}