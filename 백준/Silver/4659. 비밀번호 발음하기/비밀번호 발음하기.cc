#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string word;
	int consonant, vowel, first, second;

	while (1) {
		
		consonant = 0, vowel = 0, first =0, second=1;
		cin >> word;

		if (word == "end") break;

		
		for (int i = 0; i < word.size(); i++) {

			if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') {
				first = 1;
				vowel++;
				consonant = 0;
			}
			else {
				consonant++;
				vowel = 0;
			}

			if (vowel == 3 || consonant == 3) {
				second = 0;
				break;
			}

			if (i < word.size() - 1) {
				if (word[i] == 'e' && word[i + 1] == 'e' || word[i] == 'o' && word[i + 1] == 'o') {
					continue;
				}

				else if (word[i] == word[i + 1]) {
					second = 0;
					break;
				}
			}
			
		}
		if (first ==1 && second ==1) cout << "<" << word << ">" << " is acceptable." << '\n';
		else cout << "<" << word << ">" << " is not acceptable." << '\n';		
	
	}

	return 0;
}