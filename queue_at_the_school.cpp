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

	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	while (t--) {
		rep (i,0,n-1) {
			if (s[i+1]=='G'&&s[i]=='B') {
				s[i+1] = 'B';
				s[i] = 'G';
				i++;
			}
		}
	}
	cout << s;

	return 0;
}