#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define all(a) a.begin(), a.end()
#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int arr [3][3];
	rep (i,0,3) rep (j,0,3) cin >> arr[i][j];
	arr[1][1]=(arr[0][2]+arr[2][0])/2;
	int sum = arr[0][2]+arr[1][1]+arr[2][0];
	arr[0][0]=sum-arr[0][1]-arr[0][2];
	arr[2][2]=sum-arr[2][0]-arr[2][1];
	rep (i,0,3) {
		rep (j,0,3) cout << arr[i][j] << " ";
		cout << "\n";
	}

	return 0;
}