#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr [n+1];
		int ind [n+1];
		for (int i {1}; i<n+1; ++i) {
			cin >> arr[i];
			ind[i] = i;
		}
		if (n==1) {
			cout << -1 << "\n";
			continue;
		}
		for (int i {1}; i<n; ++i) {
			if (arr[i]==ind[i])
				swap (ind[i],ind[i+1]);
		}
		if (arr[n]==ind[n])
			swap (ind[n-1],ind[n]);
		for (int i {1}; i<n+1; ++i) cout << ind[i] << " ";
		cout << "\n";
	}

	return 0;
}