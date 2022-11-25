#include <iostream>
using namespace std;

bool Palindrome(string num) {
	int left = 0, right = num.size() - 1;
	while (left < right) if (num[left++] != num[right--]) return false;
	return true;
}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string num, result;
	
	while (1) {
		cin >> num;
		if (num == "0") return 0;
		else {
			result = Palindrome(num) ? "yes" : "no";
			cout << result << "\n";
		}
	}

}