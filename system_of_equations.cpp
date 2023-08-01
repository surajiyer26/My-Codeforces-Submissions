#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	int count {};
	for (int i {}; i<=max(n,m); ++i) {
		for (int j {}; j<=max(n,m); ++j) {
			if (i*i + j == n && i + j*j == m)
				++count;
		}
	}
	cout << count;

	return 0;
}