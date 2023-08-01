#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int k, n;
		cin >> k >> n;
		int cnt {};
		set <int> vec;
		for (int i {1}; i<=n; i+=cnt) {
			vec.insert(i);
			if (vec.size()==k) break;
			++cnt;
		}
		int temp {n};
		while (vec.size()<k) {
			if (vec.count(temp)==0) {
				vec.insert(temp);
			}
			temp--;
		}
		for (auto c: vec) {
			cout << c << " ";
		}
		cout << "\n";
	}

	return 0;
}