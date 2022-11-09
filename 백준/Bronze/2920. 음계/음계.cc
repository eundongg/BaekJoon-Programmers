#include <iostream>
using namespace std;

int main(void) {

	int n[8] = { 0 };
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	
	for (int i = 0; i < 8; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < 6; i++)	{
		if (n[i + 1] - n[i] == 1) cnt1++;
		else if (n[i + 1] - n[i] == -1) cnt2++;
		else cnt3++;
	}
	
	if (cnt1 == 6) cout << "ascending";
	else if (cnt2 == 6) cout << "descending";
	else cout << "mixed";

	return 0;
}