#include <iostream>
using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string sen;
	cin >> sen;
	for (int i = 0; i < sen.size(); i++) {
		cout << sen[i];
        if((i+1)%10==0){
            cout << '\n';
        }
	}
	return 0;
}