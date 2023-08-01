#include <iostream>
#include <string>

using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s1, s2;
	cin >> s1 >> s2;
	for (int i {}; i<s1.size(); ++i) {
		s1.at(i) = toupper(s1.at(i));
		s2.at(i) = toupper(s2.at(i));
	}
	if (s1>s2)
		cout << 1;
	else if (s2>s1)
		cout << -1;
	else
		cout << 0;

	return 0;
}