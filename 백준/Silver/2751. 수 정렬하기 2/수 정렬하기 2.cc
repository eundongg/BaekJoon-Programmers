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
	int num = 0;
	vector <int> v;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(),v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i] << "\n";
	}


	return 0;
}