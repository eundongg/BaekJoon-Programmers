#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	int sum[46] = {0};
	sum[0] = 0, sum[1] = 1;
	
	for(int i=2;i<=n;i++){
		sum[i] = sum[i-1]+sum[i-2];
	}
	cout << sum[n];
	

	return 0;

}