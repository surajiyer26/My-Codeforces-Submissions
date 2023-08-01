#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		set <int> s;
		vector <int> vec (n);
		for (int i {}; i<n; ++i) {
			cin >> vec [i];
			s.insert(vec[i]);
		}
		if (s.size()==1) {
			cout << "NO\n";
			continue;
		}
		else
			cout << "YES\n";
		sort(vec.rbegin(),vec.rend());
		for (int i {1}; i<n; ++i) {
			if (vec[i-1]==vec[i])
				continue;
			else {
				swap(vec[0],vec[i]);
				break;
			}
		}
		for (int i {}; i<n; ++i)
			cout << vec[i] << " ";
		cout << "\n";
	}

	return 0;
}