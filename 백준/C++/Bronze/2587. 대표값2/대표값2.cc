#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector <int> v;
	int num,sum=0;
	for(int i=0;i<5;i++){
		cin >> num;
		v.push_back(num);
		sum += v[i];
	}
	sort(v.begin(), v.end());
	cout << sum/5 << '\n' << v[2];
	
	
	return 0;
}