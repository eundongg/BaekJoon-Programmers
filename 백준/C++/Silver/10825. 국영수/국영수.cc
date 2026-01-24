#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
	string name;
	int kor;
	int eng;
	int math;
}student;

bool compare(student x, student y) {
	if (x.kor == y.kor) {
		if (x.eng == y.eng) {
			if (x.math == y.math) {
				return x.name < y.name;
			}
			else return x.math > y.math;
		}
		else return x.eng < y.eng;
	}
	else return x.kor > y.kor;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector <student> score(n);
	
	for (int i = 0; i < n; i++) {
		cin >> score[i].name >> score[i].kor >> score[i].eng >> score[i].math;
	}
	sort(score.begin(), score.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << score[i].name << '\n';
	}

	return 0;
}