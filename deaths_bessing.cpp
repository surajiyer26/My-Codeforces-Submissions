#include <iostream>
using namespace std;

#define int unsigned long long int

signed main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int sum {};
		for (int i {}; i<n; ++i) {
			int x;
			cin >> x;
			sum+=x;
		}
		int temp {};
		for (int i {}; i<n; ++i) {
			int x;
			cin >> x;
			temp = max (temp,x);
			sum+=x;
		}
		cout << sum-temp << "\n";
	}

	return 0;
}