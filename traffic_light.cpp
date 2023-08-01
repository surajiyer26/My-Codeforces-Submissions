#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		char c;
		string s;
		cin >> n >> c >> s;
		s+=s;
		int last {2*n-1};
		for (int i {2*n-1}; i>-1; --i) {
			if (s[i]=='g') {
				last = i;
				break;
			}
		}
		int ans {};
		for (int i {last-1}; i>-1; --i) {
			if (s[i]=='g')
				last = i;
			if (s[i]==c)
				ans = max(ans,last-i);
		}
		cout << ans << "\n";
	}

	return 0;
}