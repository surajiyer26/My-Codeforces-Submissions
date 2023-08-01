#include <iostream>
#include <bitset>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

#define ll long long int
#define ull unsigned long long int
#define M 1000000007

int main () {
	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ull n, m, k;
	cin >> n >> m >> k;
	ull arr [m+1];
	rep (i,0,m+1) cin >> arr [i];
	int ans {};
	rep (i,0,m) {
		int temp = (arr[i]^arr[m]);
		bitset <10000000> b (temp);
		if (b.count()<=k)
			ans++;
	}
	cout << ans;

	return 0;
}