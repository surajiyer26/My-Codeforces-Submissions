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
		bool value = false;
		if (s[0]=='1')
			value = true;
		int cnt {};
		for (int i {1}; i<n; ++i) {
			if (s[i]!=s[i-1]) {
				if (value)
					++cnt;
				else
					value = true;
			}
		}
		cout << cnt << "\n";
	}

	return 0;
}