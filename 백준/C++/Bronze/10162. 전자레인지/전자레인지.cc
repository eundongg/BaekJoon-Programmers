#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int A=300, B=60, C=10;
	int a = 0, b = 0, c = 0, spare=0;
	int time;
	cin >> time;

	if (time % C != 0) {
		cout << -1;
		return 0;
	}

	if (time >= A) {
		a = time / A;
		spare = time % A;
		if (spare < A) {
			b = spare / B;
			spare = spare % B;
			if (spare < B) {
				c = spare / C;
			}
		}
	}
	else if (A > time && time >= B) {
		b = time / B;
		spare = time % B;
		if (spare < B) {
			c = spare / C;
		}
	}
	else if(B > time && time >= C) {
		c = time / C;
	}
	cout << a << " " << b << " " << c;
	return 0;
}