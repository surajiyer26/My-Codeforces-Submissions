#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n==3) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
		if (n%2) {
			int a = n/2;
			int b = -(a-1);
			for (int i {}; i<n; ++i) {
				if (i%2)
					cout << (n/2) << " ";
				else
					cout << b << " ";
			}
		}
		else {
			for (int i {}; i<n; ++i) {
				if (i%2)
					cout << -5 << " ";
				else
					cout << 5 << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}