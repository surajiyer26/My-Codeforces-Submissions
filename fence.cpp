#include <iostream>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k;
	cin >> n >> k;
	int arr [n];
	rep (i,0,n) cin >> arr [i];
	int sum {}, index = 0;
	rep (i,0,k) sum += arr [i];
	int min {sum};
	rep (i,k,n) {
		sum = sum - arr [i-k] + arr [i];
		if (sum<min) {
			min = sum;
			index = i-k+1;
		}
	}
	cout << index+1;

	return 0;
}