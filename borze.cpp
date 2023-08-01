#include <iostream>
#include <string>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	for (int i {}; i<s.length(); ++i) {
		if (s.at(i)=='.') cout << 0;
		else if (s.at(i)=='-' && s.at(i+1)=='.') {
			cout << 1;
			++i;
		}
		else {
			cout << 2;
			++i;
		}
	}

	return 0;
}