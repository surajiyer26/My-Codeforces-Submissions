#include <iostream>
#include <set>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		set <int> s;
		int x;
		for (int i {}; i<n; ++i) {
			cin >> x;
			s.insert(x);
		}
		if (s.size()==n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}