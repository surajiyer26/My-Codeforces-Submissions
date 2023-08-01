#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
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
		string s;
		cin >> s;
		int o {}, z {}, omax {}, zmax {}, otemp {}, ztemp {};
		bool ostreak {1}, zstreak {1};
		rep (i,0,n) {
			if (s[i]=='1') {
				++o;
				if (zstreak) {
					zstreak = false;
					zmax = max(zmax,ztemp);
					ztemp = 0;
				}
				if (ostreak) {
					++otemp;
					if (i==n-1) {
						ostreak = false;
						omax = max(omax,otemp);
						otemp = 0;	
					}
				}
				else {
					ostreak = true;
					++otemp;
				}
			}
			else {
				++z;
				if (ostreak) {
					ostreak = false;
					omax = max(omax,otemp);
					otemp = 0;
				}
				if (zstreak) {
					++ztemp;
					if (i==n-1) {
						zstreak = false;
						zmax = max(zmax,ztemp);
						ztemp = 0;
					}
				}
				else {
					zstreak = true;
					++ztemp;
				}
			}
		}
		cout << max(o*z,max(omax*omax,zmax*zmax)) << "\n";
	}

	return 0;
}