#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string day[7] = { "SUN", "MON", "TUE", "WED", "THU","FRI", "SAT" };
	int m, d;
	cin >> m >> d;

	for (int i = 0; i < m - 1; i++) {
		d += month[i];
	}
	int result = 0;
	result = d % 7;
	cout << day[result];

	return 0;
}