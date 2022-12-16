#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;	
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> m;
		long long int s1 = 0, s2 = 0;
		long long int K[101]={0}, D[101]={0}, A[101]={0}, k, d, a;

		for (int j = 0; j < m; j++) {
			cin >> K[j] >> D[j] >> A[j];
		}
		cin >> k >> d >> a;
		for (int j = 0; j < m; j++) {
			s1 = K[j] * k - D[j] * d + A[j] * a;
			if (s1 < 0) s1 = 0;
			else {
				s2 += s1;
			}			
		}
		cout << s2<< "\n";
	}

	return 0;
}