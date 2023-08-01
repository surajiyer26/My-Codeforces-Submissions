#include <iostream>
#include <algorithm>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		unsigned long long int arr [n];
		for (int i {}; i<n; ++i)
			cin >> arr [i];
		if (n%2) {
			cout << "NO\n";
			continue;
		}
		sort (arr,arr+n);
		int ans [n], k = 0;
		for (int i {}, j {n/2}; i<n/2&&j<n; ++i,++j) {
			ans [k] = arr[i];
			ans [k+1] = arr[j];
			k+=2;
		}
		bool value = true;
		if (ans[0]>ans[1]&&ans[0]>ans[n-1] || ans[0]<ans[1]&&ans[0]<ans[n-1])
			value = value&&true;
		else 
			value = false;
		if (ans[n-1]>ans[n-2]&&ans[n-1]>ans[0] || ans[n-1]<ans[n-2]&&ans[n-1]<ans[0])
			value = value&&true;
		else
			value = false;
		for (int i {1}; i<n-1; ++i) {
			if ((ans[i]>ans[i-1]&&ans[i]>ans[i+1]) || ans[i]<ans[i-1]&&ans[i]<ans[i+1])
				value = value&&true;
			else
				value = false;
		}
		if (value) {
			cout << "YES\n";
			for (int i {}; i<n; ++i)
				cout << ans[i] << " ";
			cout << "\n";
		}
		else
			cout << "NO\n";
	}

	return 0;
}