#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	int ans = 0;
	while (t--) {
		int x, y, z;
		cin >> x >> y >> z;
		int sum = x + y + z;
		if (sum>=2)
			++ans;
	}
	cout << ans;

	return 0;
}
