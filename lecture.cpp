#include <iostream>
#include <map>
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

	int n, m;
	cin >> n >> m;
	map <string,string> mp;
	rep (i,0,m) {
		string s1, s2;
		cin >> s1 >> s2;
		mp [s1] = s2;
	}
	rep (i,0,n) {
		string s;
		cin >> s;
		int x = s.length();
		int y = mp[s].length();
		if (x<=y)
			cout << s << " ";
		else
			cout << mp[s] << " ";
	}

	return 0;
}