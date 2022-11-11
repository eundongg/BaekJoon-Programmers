#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string a, string b) {
	if (a.length() == b.length()) { // 같은 길이, 사전순
		return a < b; //아스키코드 순서대로 정렬
	}
	else {
		return a.length() < b.length(); // 다른 길이, 짧은 순
	}
}
 
int main(void) {

	int n;
	string str;
	vector<string> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (find(v.begin(), v.end(), str) == v.end())
			v.push_back(str);
	}
	sort(v.begin(), v.end(), cmp);
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}