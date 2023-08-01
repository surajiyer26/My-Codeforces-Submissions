#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n%2==1) {
			cout << 1 << " ";
			for (int i {3}; i<n-1; i+=2)
				cout << i << " " << i-1 << " ";
			cout << n-1 << " " << n << " \n";
		}
		else {
			for (int i {2}; i<n; i+=2)
				cout << i << " " << i-1 << " ";
			cout << n-1 << " " << n << " \n";
		}
	}

	return 0;
}