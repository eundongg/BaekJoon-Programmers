#include <iostream>
using namespace std;

int main(void) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int num;
	
	while (1) {
		cin >> num;
		if (num == 0) break;
		else {
			if (num % n == 0) cout << num << " is a multiple of " << n << "." <<"\n";
			else cout << num << " is NOT a multiple of " << n << "." << "\n";
		}
	}


	return 0;
}