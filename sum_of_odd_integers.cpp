#include <iostream>
#include <cmath>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		long long int x, y;
		cin >> x >> y;
		if (y>sqrt(x)) {
			cout << "NO\n";
			continue;
		}
		if (x%2!=y%2)
			cout << "NO\n";
		else
			cout << "YES\n";
	}

	return 0;
}