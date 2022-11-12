#include <iostream>
using namespace std;

int main(void) {

	string name;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name;
		for (int j = 0; j < name.size(); j++) {
			name[j] = tolower(name[j]);
		}
		cout << name<< "\n";
	}
	
}