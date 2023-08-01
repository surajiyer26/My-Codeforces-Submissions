#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
#define M 1000000007

bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second < b.second);
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
		cin >> s;
		int n = s.length();
		vector <pair<char, int>> vec;
		rep (i,0,n) {
			vec.pb(mp(s[i],i));
		}
		sort (vec.begin(),vec.end());
		if (int(s[0])>int(s[n-1])) sort(vec.begin(), vec.end(), sortbyCond);
		bool val = false;
		vi indices;
		for (auto c: vec) {
			if (c.second==0) val = true;
			if (val) {
				indices.pb(c.second);
				if (c.second==n-1) break;
			}
		}
		int cost = abs(s[0]-s[n-1]);
		cout << cost << " " << indices.size() << "\n";
		for (auto c: indices) cout << c+1 << " ";
		cout << "\n";
	}

	return 0;
}