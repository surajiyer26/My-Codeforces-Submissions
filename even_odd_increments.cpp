#include <iostream>
using namespace std;

#define int int_fast64_t

signed main () {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		int even {}, odd {};
		int sum {};
		int a [n];
		for (int i {}; i<n; ++i) {
			cin >> a[i];
			sum+=a[i];
			if (a[i]%2)
				++odd;
			else
				++even;
		}
		int type, x;
		for (int i {}; i<q; ++i) {
			cin >> type >> x;
			if (type) {
				sum+=odd*x;
				if (x%2) {
					even+=odd;
					odd=0;
				}
			}
			else {
				sum+=even*x;
				if(x%2) {
					odd+=even;
					even=0;
				}
			}
			cout << sum << "\n";
		}
	}

	return 0;
}