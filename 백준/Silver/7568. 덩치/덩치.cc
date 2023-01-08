#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	vector <pair<int, int>> v;

	int weight, height;
	for (int i = 0; i < n; i++) {
		cin >> weight >> height;
		v.push_back(make_pair(weight, height));	//make_pair || pair<int,int>
	}
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		for (int j = 0; j < n; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				cnt++;
		}
		cout << cnt << ' ';
	}

	return 0;
}