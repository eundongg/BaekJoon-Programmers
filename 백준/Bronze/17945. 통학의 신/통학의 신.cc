#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b;
	cin >> a >> b;
	// 짝수공식
	int x = -a + sqrt(a * a - b);
	int y = -a - sqrt(a * a - b);

	if (x == y) cout << x;
	else cout << y << " " << x;
	
	
	return 0;
}