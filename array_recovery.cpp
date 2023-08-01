#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int d [n];
		int a [n];
		for (int i {}; i<n; ++i) {
			cin >> d[i];
		}
		a[0] = d[0];
		int value {true};
		for (int i {1}; i<n; ++i) {
			if (a[i-1]+d[i]>0 && a[i-1]>=d[i] && d[i]!=0) {
				value = false;
				break;
			}
			a[i] = d[i]+a[i-1];
		}
		if (value) {
			for (int i {}; i<n; ++i)
				cout << a[i] << " ";
			cout << "\n";
		}
		else {
			cout << -1 << "\n";
		}
	}

	return 0;
}