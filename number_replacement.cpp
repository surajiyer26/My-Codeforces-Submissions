#include <iostream>
#include <map>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr [n];
		for (int i {}; i<n; ++i)
			cin >> arr[i];
		string s;
		cin >> s;
		map <int, char> m;
		bool value {true};
		for (int i {}; i<n; ++i) {
			if (m[arr[i]]==0)
				m[arr[i]] = s[i];
			else {
				if (m[arr[i]]!=s[i]) {
					value = false;
					break;
				}
			}
		}
		if (value)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}