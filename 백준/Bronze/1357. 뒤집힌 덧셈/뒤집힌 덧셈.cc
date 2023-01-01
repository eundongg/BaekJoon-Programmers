#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string num, num2;
	cin >> num >> num2;
	reverse(num.begin(), num.end());
	reverse(num2.begin(), num2.end());

	int n, n2;
	n = stoi(num);
	n2 = stoi(num2);

	int sum = n + n2;

	string n_sum = to_string(sum);
	reverse(n_sum.begin(), n_sum.end());
	
	int n3 = stoi(n_sum);
	cout << n3;

	return 0;
}