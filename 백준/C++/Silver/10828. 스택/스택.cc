#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
	int n, num;
	cin >> n;
	stack <int> s;
	string input;

	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "push") {
			cin >> num;
			s.push(num);
		}
		else if (input == "pop") {
			if (!s.empty()) {
				cout << s.top() << "\n";
				s.pop();
			}
			else {
				cout << "-1" <<"\n";
			}

		}
		else if (input == "size") {
			cout << s.size() << "\n";
		}
		else if (input == "empty") {
			if (!s.empty()) cout << "0" <<"\n";
			else cout << "1" << "\n";
		}
		else if (input == "top") {
			if (!s.empty()) cout << s.top() << "\n";
			else cout << "-1" << "\n";
		}
	}

	return 0;
}