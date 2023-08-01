#include <iostream>
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

	ull n, m;
	cin >> n >> m;
	ull arr [m];
	rep (i,0,m) cin >> arr [i];
	ull temp {arr[0]}, ans {arr[0]-1};
	rep (i,0,m-1) {
		if (arr[i+1]<arr[i]) {
			ans += n-temp+arr[i+1];
			temp = arr[i+1];
		}
		else {
			ans += arr[i+1]-arr[i];
			temp = arr[i+1];
		}
	}
	cout << ans;

	return 0;
}