#include <iostream>
using namespace std;
int EMAX = 15;
int SMAX = 28;
int MMAX = 19;

int main(){
    int E,S,M;
    cin >> E>>S>>M;
    int e=0,s=0,m=0;
    int year=0;
    
    while(1){
        e++;
        s++;
        m++;
        year++;
        if(e>EMAX) e=1;
        if(s>SMAX) s=1;
        if(m>MMAX) m=1;
        if(e==E && s==S && m==M){
            cout << year;
            return 0;
        }
    }
}