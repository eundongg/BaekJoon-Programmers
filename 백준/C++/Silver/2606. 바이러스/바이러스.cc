#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> graph;	//인접 리스트
//이중 vector 를 사용함으로써 필요한 메모리만 할당해서 사용할 수 있음
vector<bool> infected;	//정점 방문 여부 저장
queue <int> q;

void dfs(int start){
	infected[start] = true;

	for (int i = 0; i < graph[start].size(); i++) {
		int next = graph[start][i];
		if (!infected[next]) {
			dfs(next);
		}
	}
}


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, line;	//정점의 개수, 간선의 개수
	cin >> n >> line;
	graph.assign(n + 1, vector<int>(0, 0));	//assign 함수를 통해서 vector<int>를 n+1개 할당
	infected.assign(n + 1, false); // 노드는 1~n, 모두 false로 초기화
	

	for (int i = 0; i < line; i++) {	//간선 연결
		int n1, n2;
		cin >> n1 >> n2;
		graph[n1].push_back(n2);
		graph[n2].push_back(n1);
	}
	
	dfs(1);	// bfs 시작 노드 1
	int total = 0;
	for (int i = 2; i <= n; i++) {	//이미 1번은 감염
		if (infected[i]) total++;
	}
	cout << total;
	
	return 0;
}