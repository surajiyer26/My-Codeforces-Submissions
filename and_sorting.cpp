#include <iostream>
#include <vector>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr [n];
		for (int i {}; i<n; ++i) 
			cin >> arr [i];
		// int temp = arr[0];
		vector <int> vec;
		for (int i {0}; i<n; ++i) {
			if (arr[i]==i)
				continue;
			else
				vec.push_back(arr[i]);
		}
		int ans = vec[0];
		int n2 = vec.size();
		for (int i {1}; i<n2; ++i)
			ans = ans&vec[i];
		cout << ans << "\n";
	}

	return 0;
}