#include <iostream>
#include <vector>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector <int> vec (n);
		for (int i {}; i<n; ++i)
			cin >> vec[i];
		int cnt = 1;
		for (int i {}; i<n; ++i) {
			if (vec[i]==cnt) {
				cnt++;
			}
		}
		cout << (n-cnt+k)/k << "\n";
	}

	return 0;
}