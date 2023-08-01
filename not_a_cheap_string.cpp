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
		string s;
		int n;
		cin >> s >> n;
		string s2 = s;
		sort (s2.begin(),s2.end());
		reverse (s2.begin(),s2.end());
		int siz = s.length();
		int cnt {};
		rep (i,0,siz) {
			cnt+=int(s[i])-96;
		}
		map <char,int> m;
		rep (i,0,siz) {
			if (cnt>n) {
				m[s2[i]]++;
				cnt-=int(s2[i])-96;
			}
			else {
				break;
			}
		}
		rep (i,0,siz) {
			if (m[s[i]]) {
				m[s[i]]--;
				continue;
			}
			cout << s[i];
		}
		cout << "\n";
	}

	return 0;
}