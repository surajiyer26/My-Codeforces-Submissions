#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int temp = n/2+1;
		int j {1};
		bool value {true};
		for (int i {}; i<n; ++i) {
			if (value) {
				cout << temp << " ";
				++temp;
				value = false;
			}
			else {
				cout << j << " ";
				++j;
				value = true;
			}
		}
		cout << "\n";
	}

	return 0;
}