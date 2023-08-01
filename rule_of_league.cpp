#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, x, y;
		cin >> n >> x >> y;
		if ((x!=0&&y!=0)||x==0&&y==0) {
			cout << -1 << "\n";
			continue;
		}
		int z = x+y; // cuz one of them is 0 anyways
		if (z==1) {
			for (int i {2}; i<=n; ++i)
				cout << i << " ";
			cout << "\n";
			continue;
		}
		int temp = n-1;
		if (temp%z) {
			cout << -1 << "\n";
			continue;
		}
		for (int i {2}; i<=n; i+=z) {
			for (int j {0}; j<z; ++j) {
				cout << i << " ";
			}
		}
		cout << "\n";
	}

	return 0;
}