#include <iostream>
#include <algorithm>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	cin >> x;
	int arr [x];
	rep (i, 0, x) cin >> arr [i];
	sort (arr, arr+x);
	bool value = true;
	rep (i, 0, x/3) {
		if (arr[i]>=arr[i+x/3] || arr[i+x/3]>=arr[i+2*x/3] || arr[i+x/3]%arr[i]!=0 || arr[i+2*x/3]%arr[i+x/3]!=0) {
			value = false;
			break;
		}
	}
	if (value)
	rep (i, 0, x/3) {
		cout << arr [i] << " ";
		cout << arr [i+x/3] << " ";
		cout << arr [i+2*x/3];
		cout << endl;
	}
	else
		cout << -1;

	return 0;
}