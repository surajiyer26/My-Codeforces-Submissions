#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	string s, s2 {};
	cin >> s;
	sort (s.begin(), s.end());
	int count {};
	for (int i {}; i<s.length(); ) {
		for (int j {}; j<s.length(); ++j) {
			if (s[i]==s[j])
				++count;
		}
		if (count%n==0) {
			for (int k {}; k<count/n; ++k) 
				s2 += s[i];
			i+=count;
			count = 0;
		}
		else {
			cout << -1;
			return 0;
		}
	}
	while (n--) cout << s2;

	return 0;
}