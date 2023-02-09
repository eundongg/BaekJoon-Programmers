#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	long long int kilometer[10000] = { 0 };
	long long int gasStation[10000] = { 0 };
	long long int total_fee = 0;
	for (int i = 0; i < n - 1; i++) {
		cin >> kilometer[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> gasStation[i];
	}

	long long int min = gasStation[0];
	long long int total_K = 0;
	for (int i = 1; i < n; i++) {

		total_K += kilometer[i-1];

		if (gasStation[i] <= min) {			
			total_fee += total_K * min;
			min = gasStation[i];
			total_K = 0;
		}
		if (i == (n - 1)) {
			total_fee += total_K * min;
		}		
	}
	cout << total_fee;
	
	return 0;
}