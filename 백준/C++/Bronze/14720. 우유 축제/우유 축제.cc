#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;
	int num, cnt = 0;
	int check[3] = { 0,1,2 };
	int check_int = 0;
	for (int i = 0; i < n; i++){
		cin >> num;
		if (num == check[check_int]) {
			cnt++;
			check_int++;
			if (check_int == 3) check_int = 0;
		}
	}
	cout << cnt;

	return 0;
}