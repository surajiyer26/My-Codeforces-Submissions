#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		string s1, s2;
		cin >> s1 >> s2;
		int s1l = s1.length();
		int s2l = s2.length();
		if (s1[s1l-1]==s2[s2l-1]) {
			if (s1[s1l-1]=='S') {
				if (s1l>s2l)
					cout << "<\n";
				else if (s1l<s2l)
					cout << ">\n";
				else
					cout << "=\n";
			}
			else if (s1[s1l-1]=='L') {
				if (s1l>s2l)
					cout << ">\n";
				else if (s1l<s2l)
					cout << "<\n";
				else
					cout << "=\n";
			}
			else
				cout << "=\n";
		}
		else {
			if (s1[s1l-1]=='S')
				cout << "<\n";
			else if (s1[s1l-1]=='L')
				cout << ">\n";
			else if (s2[s2l-1]=='S')
				cout << ">\n";
			else
				cout << "<\n";
		}
	}

	return 0;
}