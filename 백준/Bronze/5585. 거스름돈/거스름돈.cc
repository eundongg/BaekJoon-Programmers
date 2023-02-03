#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int pay;
	cin >> pay;
	int return_pay = 1000 - pay;
	int cnt = 0;

	while (1) {
		if (return_pay >= 500) {
			return_pay -= 500;
			cnt++;
		}
		if (return_pay < 500 && return_pay >= 100) {
			cnt += (return_pay / 100);
			return_pay %= 100;			
		}
		if (return_pay < 100 && return_pay >= 50) {
			cnt += (return_pay / 50);
			return_pay %= 50;
		}
		if (return_pay < 50 && return_pay >= 10) {
			cnt += (return_pay / 10);
			return_pay %= 10;
		}
		if (return_pay < 10 && return_pay >= 5) {
			cnt += (return_pay / 5);
			return_pay %= 5;
		}
		if (return_pay < 10 && return_pay >= 1) {
			cnt += return_pay;
			return_pay = 0;
		}
		if (return_pay == 0) break;
	}
	cout << cnt;

	return 0;
}