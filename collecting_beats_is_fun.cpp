#include <iostream>
using namespace std;
int main () {
	
	int k;
	int cnt [10] {};
	char mp [4][5];
	cin >> k;
	for (int i {}; i<4; ++i) {
		cin >> mp[i];
		for (int j {}; j<4; ++j) {
			if (mp[i][j]=='.')
				continue;
			else
				cnt[mp[i][j] - '0']++;
		}
	}
	bool value {true};
	for (int i {}; i<=9; ++i) {
		if (cnt[i]>2*k)
			value = false;
	}
	if (value)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}