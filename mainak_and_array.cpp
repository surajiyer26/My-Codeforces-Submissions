#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr [2*n];
		int maxn = 1;
		int minn = 999;
		for (int i {}; i<n; ++i) {
			cin >> arr [i];
			maxn = max(arr[i],maxn);
			minn = min(arr[i],minn);
		}
		for (int i {n}; i<2*n; ++i) {
			arr [i] = arr [i-n];
		}
		int ans {};
		ans = max(maxn-arr[0],arr[n-1]-minn);
		int temp {};
		for (int i {}; i<=n; ++i) {
			temp = max (temp,arr[i+n-1]-arr[i]);
		}
		ans = max(ans,temp);
		cout << ans << "\n";
	}

	return 0;
}