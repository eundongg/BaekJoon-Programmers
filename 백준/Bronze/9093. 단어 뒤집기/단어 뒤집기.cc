#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cin.ignore();
	stack <char> s;
	for (int i = 0; i < n; i++) {
		
		string sen = "";
		getline(cin, sen);
		sen += ' ';	

		for (int j = 0; j < sen.size(); j++) {
			if (sen[j] == ' ') {
				while (!s.empty()) {
					cout << s.top();
					s.pop();
				}
				cout << sen[j];
			}
			else {
				s.push(sen[j]);
			}
		}
	}

	return 0;
}