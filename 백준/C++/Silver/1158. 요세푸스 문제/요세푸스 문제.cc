#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;
	int store = 0;
	queue <int> q;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	cout << '<';
	
	while (!q.empty()) {
		for (int i = 1; i < k; i++){
			store = q.front();
			q.pop();
			q.push(store);
		}
		if (q.size() != 1) {
			cout << q.front() << ',' << ' ';
			q.pop();
		}
		else {
			cout << q.front() << '>';
			q.pop();
		}
	}


	return 0;
}