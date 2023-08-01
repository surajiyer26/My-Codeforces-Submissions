#include <iostream>
#include <string>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int ans = 0;
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (s=="++X" || s=="X++")
			++ans;
		if (s=="--X" || s=="X--")
			--ans;
	}
	cout << ans;

	return 0;
}