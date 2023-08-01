#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <utility>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

#define pb push_back
#define mp make_pair

#define int int_fast64_t
#define M 1000000007

int gcd (int a, int b) {
	if (b==0) 
		return a;
	return gcd(b, a%b);
}

int hcf (int a, int b) {
	return (a*b)/gcd(a,b);
}

int fact (int a) {
	if (a==0)
		return 1;
	else
		return a*fact(a-1);
}

signed main () {
	
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		if (n%2) {
			cout << -1 << "\n";
			continue;
		}
		int max = n; // 10
		int min = n;
		int maxcnt = max/4; // 2 1
		max=max%4; // 2 6
		int mincnt = min/6; // 76
		min=min%6; // 4
		while (max) {
			if (max%6==0) {
				maxcnt+=max/6;
				break;
			}
			max+=4;
			maxcnt--;
		}
		while (min) {
			if (min%4==0) {
				mincnt+=min/4;
				break;
			}
			min+=6;
			mincnt--;
		}
		if (n<7) {
			if (n==6) {
				mincnt=1;
				maxcnt=1;
			}
			else if (n==4) {
				mincnt=1;
				maxcnt=1;
			}
			else {
				cout << -1 << "\n";
				continue;
			}
		}
		cout << mincnt << " " << maxcnt << "\n";
	}

	return 0;
}