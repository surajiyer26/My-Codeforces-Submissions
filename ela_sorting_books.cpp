#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		map <char,int> m;
		for (int i {}; i<n; ++i)
			m[s[i]]++;
		string ans;
		for (int i {}; i<k; ++i) {
			bool value {};
			int cnt {1};
			char c;
			int x = n/k;
			for (c = 'a'; c<='z'; ++c) {
				if (cnt>x) {
					value = true;
					break;
				}
				if (m[c]==0) {
					ans += c;
					break;
				}
				m[c]--;
				cnt++;
			}
			if (value)
				ans += c;
		}
		cout << ans << "\n";
	}

	return 0;
}