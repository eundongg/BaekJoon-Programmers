#include <iostream>
#include <stack>
using namespace std;

bool VPS(string ps) {
	stack<int> stack;

	for (int i = 0; i < ps.size(); i++) {
		if (ps[i] == '(') {
			stack.push('(');
		}
		else if (ps[i] == ')') {
			if (stack.empty()) return false;
			else stack.pop();
		}
	}
	if (stack.empty()) return true;
	else return false;
}
int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	string ps, result;

	for (int i = 0; i < n; i++) {
		cin >> ps;
		result = VPS(ps) ? "YES" : "NO";
		cout << result << "\n";
		
	}
	return 0;
}