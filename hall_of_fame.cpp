#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		bool val = true;
		for (int i {}; i<n-1; ++i) {
			if (s[i]=='R'&&s[i+1]=='L') {
				cout << 0 << "\n";
				val = false;
				break;
			}
			if (s[i]=='L'&&s[i+1]=='R') {
				cout << i+1 << "\n";
				val = false;
				break;
			}
		}
		if (val) {
			cout << -1 << "\n";
		}
	}

	return 0;
}