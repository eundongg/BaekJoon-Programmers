#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	cin >> str;
	int cnt=0;
	for(int i=0;i<str.size();i++){
		if(str[i]==',') cnt++;
	}
	cout << cnt+1;
	

	return 0;

}
