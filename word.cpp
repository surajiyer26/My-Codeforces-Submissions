#include <iostream>
#include <string>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int low = 0, up = 0;
	for (int i {}; i<s.length(); ++i) {
		if (isupper(s.at(i)))
			++up;
		else
			++low;
	}
	if (up>low) {
		for (int i {}; i<s.length(); ++i) {
			s.at(i) = toupper(s.at(i));
		}
	}
	else {
		for (int i {}; i<s.length(); ++i) {
			s.at(i) = tolower(s.at(i));
		}
	}
	cout << s;

	return 0;
}