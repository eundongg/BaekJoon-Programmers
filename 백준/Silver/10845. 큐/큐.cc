#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;
	cin >> n;
	queue <int> q;
	string input;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "push") {
			cin >> num;
			q.push(num);
		}
		else if (input == "pop") {
			if (!q.empty()) {
				cout << q.front() << "\n";
				q.pop();
			}
			else {
				cout << "-1" <<"\n";
			}

		}
		else if (input == "size") {
			cout << q.size() << "\n";
		}
		else if (input == "empty") {
			if (!q.empty()) cout << "0" <<"\n";
			else cout << "1" << "\n";
		}
		else if (input == "front") {
			if (!q.empty()) cout << q.front() << "\n";
			else cout << "-1" << "\n";
		}
		else if (input == "back") {
			if (!q.empty()) cout << q.back() << "\n";
			else cout << "-1" << "\n";
		}
	}

	return 0;
}