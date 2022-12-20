#include <iostream>
#include <string>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	string search;
	cin >> search;

	string ans = search;

	for (int i = 1; i < n; i++) {
		string div;
		cin >> div;
		for (int j = 0; j < div.size(); j++) {
			if (div[j] != ans[j]) ans[j] = '?';
		}
	}
	cout << ans;

	return 0;
}