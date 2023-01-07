#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
	int num;
	int gold;
	int silver;
	int bronze;
	int rank;
}nation; //nation 구조체 정의

bool compare(nation x, nation y) { //고려 기준이 많을 때 구조체 이용
	if (x.gold == y.gold) {
		if (x.silver == y.silver)
			return x.bronze > y.bronze;
		else return x.silver > y.silver;
	}
	else return x.gold > y.gold;
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, k,result=0;
	cin >> n >> k;
	vector<nation> medal(n + 1); //i=1부터 시작
	for (int i = 1; i <= n; i++) {
		cin >> medal[i].num >> medal[i].gold >> medal[i].silver >> medal[i].bronze;
	}
	sort(medal.begin() + 1, medal.end(), compare);

	int currank = 1;
	for (int i = 1; i <= n; i++) {
		if (medal[i].gold == medal[i - 1].gold && medal[i].silver == medal[i - 1].silver
			&& medal[i].bronze == medal[i - 1].bronze) {
			medal[i].rank = currank;
		}
		else {
			currank = i;
			medal[i].rank = i;
		}
		if (medal[i].num == k) {
			result = medal[i].rank;
			break;
		}
	}
	cout << result;
	return 0;
}