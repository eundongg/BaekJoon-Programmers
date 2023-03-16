#include <iostream>
#include <cstring>  // strlen(), strcpy()

using namespace std;
char test[1001];
int cnt=0;

int recursion(const char *s, int l, int r){
    cnt++;
    if(l>=r) return 1;
    else if(s[l]!=s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s,0,strlen(s)-1);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        cin >> test;
        cout << isPalindrome(test) << " " << cnt << '\n';
        cnt =0;
    }

    return 0;
}