#include <iostream>
#include <string>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	string s;
	cin >> x >> s;
	char c = s.at(0);
	int ans {};
	for (int i {1}; i<x; ++i) {
		if (c==s.at(i))
			++ans;
		c=s.at(i);
	}
	cout << ans;

	return 0;
}