#include <iostream>
#include <queue>
#include <vector>    // 면적 크기 저장할거임
#include <algorithm> // 오름차순 정렬
#define MAX 101
using namespace std;

int paper[MAX][MAX];
vector <int> area;
int m,n,k;
int dx[4]={0,0,-1,1};
int dy[4]={-1,1,0,0};

void bfs(int in_x, int in_y){
    
    paper[in_x][in_y]=1;
    queue <pair<int,int>> adj_q;
    adj_q.push(make_pair(in_x, in_y));
    int dimension=1;
    while(!adj_q.empty()){
        int x = adj_q.front().second;
        int y = adj_q.front().first;
        adj_q.pop();
        
        //와리가리
        for(int i=0;i<4;i++){
            int next_x = x + dx[i];
            int next_y = y + dy[i];
            
            if(0<=next_x && next_x <n && 0<=next_y && next_y <m){
                if(paper[next_y][next_x]==0){
                    paper[next_y][next_x]=1;
                    adj_q.push(make_pair(next_y, next_x));
                    dimension++;
                }
            }
        }
    }
    
    area.push_back(dimension);
    
}

int main(){
    cin >> m>> n>> k; //세로, 가로, 직사각형 개수
    for(int i=0;i<k;i++){    
        int x1, y1, x2, y2;    // 왼쪽 맨 아래, 오른쪽 맨 위
        cin >> x1 >> y1>> x2>>y2;
        for(int j=y1;j<y2;j++){
            for(int h=x1;h<x2;h++){
                paper[j][h]=1; // 직사각형 크기만큼 방문 처리
            }
        }
    }
    int rec_cnt=0; // 직사각형 제외 영역
    // 모눈종이 탐색
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            // 직사각형 외부라면
            if(paper[i][j]==0){
                bfs(i,j);
                rec_cnt++;
            }
        }
    }
    cout << rec_cnt << '\n';
    sort(area.begin(), area.end());
    for(int i=0;i<area.size();i++){
        cout << area[i] << ' ';
    }
    return 0;
    
}
