#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		++n;
		++m;
		cout << n/2 << " " << m/2 << "\n";
	}

	return 0;
}