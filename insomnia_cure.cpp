#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;
	int arr [d] {};
	for (int i {k-1}; i<d; i+=k)
		arr [i] = 1;
	for (int i {l-1}; i<d; i+=l)
		arr [i] = 1;
	for (int i {m-1}; i<d; i+=m)
		arr [i] = 1;
	for (int i {n-1}; i<d; i+=n)
		arr [i] = 1;

	int ans {};
	for (int i {}; i<d; ++i)
		if (arr[i]==1) ++ans;

	cout << ans;

	return 0;
}