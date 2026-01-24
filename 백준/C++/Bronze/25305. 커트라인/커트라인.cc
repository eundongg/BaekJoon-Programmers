#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,k;
	cin >> n >> k;
	int score[1001]={0};
	for(int i=0;i<n;i++){
		cin >> score[i];
	}
	sort(score, score+n, greater<int>());
	cout << score[k-1];

	return 0;
}