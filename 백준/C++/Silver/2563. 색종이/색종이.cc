#include<iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n,x,y,total=0;
    cin >> n;
    int coordinate[101][101]={0};

    for(int i=0;i<n;i++){    //입력받은 좌표부터 +10만큼 모두 표시
        cin >> x>> y;
        if(x>90 || y>90) i--;
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                coordinate[x+j][y+k]++;
            }
        }
    }
    for(int i=0;i<=100;i++){    // 한 번이라도 더해졌다면 total값 +1
        for(int j=0;j<=100;j++){
            if(coordinate[i][j]>0){
                total++;
            }
        }
    }
    cout << total;
    return 0;
}