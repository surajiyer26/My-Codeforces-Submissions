#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, m, x, y, d;
		cin >> n >> m >> x >> y >> d;
		if (min(x-1,m-y)<=d&&min(n-x,y-1)<=d)
			cout << -1 << "\n";
		else
			cout << n+m-2 << "\n";
	}

	return 0;
}