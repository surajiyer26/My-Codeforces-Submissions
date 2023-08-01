#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int sum {};
		for (int i {}; i<n; ++i) {
			int x;
			cin >> x;
			sum+=x;
		}
		if (sum)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}