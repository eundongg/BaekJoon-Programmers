#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {

	int input[4]={0};
	
	while (1) {
		cin >> input[0] >> input[1] >> input[2];
		sort(input, input + 3);

		if (input[0] == 0 && input[1] == 0 && input[2] == 0) {
			break;
		}
		else {
			if (pow(input[2], 2) == (pow(input[1], 2) + pow(input[0], 2))) {
				cout << "right" << "\n";
			}
			else cout << "wrong" <<"\n";
		}
	}
	return 0;
}
