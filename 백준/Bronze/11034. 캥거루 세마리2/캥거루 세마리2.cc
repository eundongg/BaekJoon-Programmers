#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int num[4] = { 0 };
	while (cin >> num[0] >> num[1] >> num[2]) {

		sort(num, num + 3);
		int dist1=0, dist2 = 0;
		int cnt = 0;

		while (1) {
			dist1 = num[1] - num[0], dist2 = num[2] - num[1];
			if (dist1 == 1 && dist2 == 1) break;
			if (dist1 >= dist2) {
				num[2] = num[1];
				num[1] = num[1] - 1;
				cnt++;
			}
			else {
				num[0] = num[1];
				num[1] = num[1] + 1;
				cnt++;
			}
			
		}
		cout << cnt<< '\n';
	
	}
	
	return 0;
}