#include <iostream>
#include <string>
using namespace std;

int main(void) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	string sen;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, sen);
		if (sen[0] >= 97 && sen[0] <= 122) {
			sen[0] -= 32;
		}
		cout << sen << "\n";
	}
	
	return 0;
}