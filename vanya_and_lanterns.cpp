#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
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

	int n, l;
	cin >> n >> l;
	int arr [n];
	rep (i,0,n) cin >> arr [i];
	sort (arr,arr+n);
	int maxd {max(arr[0],l-arr[n-1])*2};
	rep (i,0,n-1) {
		int temp = (arr[i+1]-arr[i]);
		maxd = max(maxd,temp);
	} 
	cout << fixed;
	cout << setprecision(10);
	cout << maxd/2.0;

	return 0;
}