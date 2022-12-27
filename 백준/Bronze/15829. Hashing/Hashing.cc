#include <iostream>
#include <cmath>
#define MOD 1234567891
using namespace std;

int Hash(string s, int n) {
	long long hash = 0,r=1;
	for (int i = 0; i < n; i++) {
		hash = (hash + (s[i] - 'a' + 1) * r) % MOD;
		r = (r * 31) % MOD;
	}
	return hash;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	string str;	
	cin >> str;
	cout << Hash(str, n);	

	return 0;
}