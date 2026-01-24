#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<vector<int>> graph;	//인접 리스트
//이중 vector 를 사용함으로써 필요한 메모리만 할당해서 사용할 수 있음
vector<int> isVisited;
queue <int> q;
int cnt = 0;

void bfs(int cur){
	q.push(cur);
	isVisited[cur] = ++cnt;	
	
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (isVisited[next] == 0) {
				q.push(next);
				isVisited[next] = ++cnt;
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, line, start;	//정점의 개수, 간선의 개수
	cin >> n >> line >>start;
	graph.assign(n + 1, vector<int>(0, 0));	//assign 함수를 통해서 vector<int>를 n+1개 할당
	isVisited.assign(n + 1, 0); // 노드는 1~n, 모두 false로 초기화
	

	for (int i = 0; i < line; i++) {	//간선 연결
		int n1, n2;
		cin >> n1 >> n2;
		graph[n1].push_back(n2);
		graph[n2].push_back(n1);
	}
	
	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}
	
	bfs(start);	// bfs 시작 노드
	for (int i = 1; i <= n; i++) {
		cout << isVisited[i] << '\n';
	}
		
	return 0;
}