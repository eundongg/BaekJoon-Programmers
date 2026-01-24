#include <iostream>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str[5];
	int len[5] = { 0 };

	for (int i = 0; i < 5; i++) {
		cin >> str[i];
		len[i] = str[i].size();
	}
	int max = *max_element(len, len + 5);

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < 5; j++) {
			if (i >= str[j].size()) continue;
			cout << str[j][i];
		}
	}

	return 0;
}