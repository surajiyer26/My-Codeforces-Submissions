#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << 1 << " ";
		for (int i {n}; i>1; --i)
			cout << i << " ";
		cout << "\n";
	}

	return 0;
}