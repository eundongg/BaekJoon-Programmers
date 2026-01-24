#include <iostream>
using namespace std;

int main() {

	int n;
	int x = 0, y = 0;
	cin >> n;

	for(int i=0;;i++)
	{
		if (n % 5 == 0) {
			y = n / 5;
			break;
		}
		if (n % 5 != 0) {
			n -= 3;
			x += 1;
		}
		if (n < 0) {
			cout << "-1";
			break;
		}
	}
	if (n >= 0) {
		cout << x + y;
	}

	return 0;
}
