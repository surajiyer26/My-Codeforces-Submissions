#include <iostream>
#include <string>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;
	for (int i {}; i<s1.length(); ++i) {
		if (s1.at(i)==s2.at(i))
			cout << 0;
		else
			cout << 1;
	}

	return 0;
}