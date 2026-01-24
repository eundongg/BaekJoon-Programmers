#include <iostream>
#include <deque>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;
	cin >> n;
	deque <int> dq;
	string input;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "push_front") {
			cin >> num;
			dq.push_front(num);
		}
		else if (input == "push_back") {
			cin >> num;
			dq.push_back(num);
		}
		else if (input == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else {
				cout << "-1" << "\n";
			}

		}
		else if (input == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else {
				cout << "-1" << "\n";
			}

		}
		else if (input == "size") {
			cout << dq.size() << "\n";
		}
		else if (input == "empty") {
			if (!dq.empty()) cout << "0" << "\n";
			else cout << "1" << "\n";
		}
		else if (input == "front") {
			if (!dq.empty()) cout << dq.front() << "\n";
			else cout << "-1" << "\n";
		}
		else if (input == "back") {
			if (!dq.empty()) cout << dq.back() << "\n";
			else cout << "-1" << "\n";
		}
	}

	return 0;
}