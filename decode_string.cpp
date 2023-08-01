#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		string ans;
		for (int i {n-1}; i>=0; --i) {
			if (s[i]!='0') {
				ans+=(s[i]-'0'-1+'a');
			}
			else {
				string num;
				num+=s[i-2];
				num+=s[i-1];
				int x = stoi(num);
				ans+=('a'+x-1);
				i-=2;
			}
		}
		reverse (ans.begin(),ans.end());
		cout << ans << "\n";
	}

	return 0;
}