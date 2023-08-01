#include <iostream>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int arr [n], sum {};
	rep (i,0,n) {
		cin >> arr [i];
		sum += arr [i];
	}
	if (sum%n)
		cout << n-1;
	else
		cout << n;

	return 0;
}