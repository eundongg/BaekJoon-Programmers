#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string sen;
	getline(cin, sen);

	for (int i = 0; i < sen.size(); i++) {
		if ('A' <= sen[i] && sen[i] <= 'Z') {
			if (sen[i] > 77) {
				sen[i] = sen[i] - 13;
			}
			else sen[i] = sen[i] + 13;
		}
		else if ('a' <= sen[i] && sen[i] <= 'z') {
			if (sen[i] > 109) {
				sen[i] = sen[i] - 13;
			}
			else sen[i] = sen[i] + 13;
		}
	}
	for (int i = 0; i < sen.size(); i++) {
		cout << sen[i];
	}
	return 0;
}