#include <iostream>
#include <string>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	for (int i {}; i<s.size(); ++i) {
		if (s.at(i)=='H'|| s.at(i)=='Q' || s.at(i)=='9') {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";

	return 0;
}