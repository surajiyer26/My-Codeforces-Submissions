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

	string s;
	cin >> s;
	int n = s.length()-1;
	int index = n;
	rep (i,0,n)
		if ((s[i]-'0')%2==0) {
			index = i;
			if (s[n]>s[i])
				break;
		}
	if (n==index)
		cout << -1 << "\n";
	else {
		swap(s[index],s[n]);
		cout << s << "\n";
	}

	return 0;
}