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

	// minimum
	if (n%m==0) {
		ull t = n/m;
		cout << ((t*(t-1))/2)*m;
	}
	else {
		ull t = n/m;
		cout << ((t*(t+1))/2)*(n%m) + ((t*(t-1))/2)*(m-n%m);
	}

	// space
	cout << " ";

	// maximum
	ull t = n-m+1;
	cout << ((t*(t-1))/2);

	return 0;
}