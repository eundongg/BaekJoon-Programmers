#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, cnt=0;
	cin >> n >> m;
	vector <string> word;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		word.push_back(str);
	}
	sort(word.begin(), word.end());

	for (int i = 0; i < m; i++) {
		cin >> str;
		if (binary_search(word.begin(), word.end(), str)) cnt++;		
	}
	cout << cnt;

	return 0;
}