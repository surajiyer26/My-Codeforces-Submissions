#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans {};
		int arr [n];
		for (int i {}; i<n; ++i) {
			cin >> arr[i];
		}
		for (int i {0}; i<n; ++i) {
			ans+=(arr[i]-1)/(2*arr[0]-1);
		}
		cout << ans << "\n";
	}

	return 0;
}