#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;	//첫 번째 원소를 기준으로 순서대로 오름차순
}
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector <pair<int, string>> v;
	for (int i = 0; i < n; i++) {
		int age;
		string name;
		cin >> age >> name;
		v.push_back(pair<int, string>(age, name));
	}

	stable_sort(v.begin(), v.end(),compare);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;

}