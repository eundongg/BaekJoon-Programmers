#include <iostream>
#include <algorithm>
using namespace std;
int cnt1, cnt2;
int arr[41] = { 0 };
int fib(int n) {
	if (n == 1 || n == 2) {
		cnt1++;
		return 1;
	}
	else return (fib(n - 1) + fib(n - 2));
}
int fibonacci(int n) {
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i <= n; i++) {
		cnt2++;
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr[n];
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cnt1 = 0, cnt2 = 0;
	fib(n);
	fibonacci(n);
	cout << cnt1 << " " << cnt2;

	return 0;
}