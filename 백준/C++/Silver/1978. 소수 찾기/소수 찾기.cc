#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int num, cnt, result = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		cnt = 0;
		for (int j = 1; j <= num; j++) {
			for (int k = num; k > 1; k--) {
				if (num == j * k) cnt++;
			}
			
		}if (cnt == 1) result++;		
	}
	
	cout << result;

	return 0;
}