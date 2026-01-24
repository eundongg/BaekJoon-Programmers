#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector <pair<int, int>> v;
	int a, b;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(pair<int, int>(a, b));
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}