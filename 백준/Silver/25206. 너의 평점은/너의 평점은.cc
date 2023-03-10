#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {

    string subjectScore;
    double sum = 0;
    double totalScore = 0;
    
    for (int i = 0; i < 20; i++) {
        getline(cin, subjectScore); //공백을 포함하여 입력을 받으므로 getline()함수 사용
        istringstream ss(subjectScore);  // 문자열을 스트림화

        vector<string> results; //  공백 분리 결과를 저장할 배열
        
        string word;
        while (getline(ss, word, ' ')) {
            results.push_back(word);
        }
        double score = stod(results[1]);
        totalScore += score;
        string scoreEvaluation = results[2];

        if (scoreEvaluation == "P") {
            totalScore -= score;    // 학점평균이 P가 나오면 계산에서 제외되므로
            continue;
        }
        else if (scoreEvaluation == "A+") {
            sum += (score * 4.5);
        }
        else if (scoreEvaluation == "A0") {
            sum += (score * 4.0);
        }
        else if (scoreEvaluation == "B+") {
            sum += (score * 3.5);
        }
        else if (scoreEvaluation == "B0") {
            sum += (score * 3.0);
        }
        else if (scoreEvaluation == "C+") {
            sum += (score * 2.5);
        }
        else if (scoreEvaluation == "C0") {
            sum += (score * 2.0);
        }
        else if (scoreEvaluation == "D+") {
            sum += (score * 1.5);
        }
        else if (scoreEvaluation == "D0") {
            sum += (score * 1.0);
        }
        else if (scoreEvaluation == "F") {
            sum += (score * 0.0);
        }
        
    }
    cout << fixed;  // 소수점 자리 고정
    cout.precision(6);  // 소수점 아래 6자리 출력
    cout << sum / totalScore;
    
    return 0;

}