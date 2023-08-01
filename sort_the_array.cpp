#include <iostream>
#include <algorithm>
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

	int n;
	cin >> n;
	int arr [n];
	rep (i,0,n) cin >> arr [i];
	int starti{}, endi{n};
	if (is_sorted(arr,arr+n)) {
		cout << "yes\n";
		cout << 1 << " " << 1;
	}
	else {
		rep (i,0,n-1) {
			if (arr[i+1]<arr[i] && !starti)
				starti = i+1;
			if (arr[i+1]>arr[i] && starti) {
				endi = i+1;
				break;
			}
		}
		int starti2 = starti, endi2 = endi; // 1 2
		while (endi2>starti2) {
			int temp = arr[starti2-1];
			arr[starti2-1] = arr[endi2-1];
			arr[endi2-1] = temp;
			starti2++;
			endi2--;
		}
		if (is_sorted(arr,arr+n)) {
			cout << "yes\n";
			cout << starti << " " << endi;
		}
		else
			cout << "no";
	}
	
	

	return 0;
}