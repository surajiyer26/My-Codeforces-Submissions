#include <bits/stdc++.h>
using namespace std;

#define vi vector <int>
#define vii vector <pair<int,int>>
#define pb push_back
#define mp make_pair

#define all(a) a.begin(), a.end()
#define rep(a,b,c) for(int a {b}; a<c; ++a)
#define repr(a,b,c) for(int a {b}; a>c; --a)

#define int int_fast64_t
const int M = 1e9+7;

signed main () {

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	cin >> s1 >> s2;
	int i {}, j {};
	while (i<s1.length()) {
		if (s1[i]==s2[j]) i++, j++;
		else i++;
		if (j==s2.length()) {
			cout << "automaton";
			return 0;
		}
	}
	string s3 = s1, s4 = s2;
	sort(all(s3));
	sort(all(s4));
	if (s3==s4) {
		cout << "array";
		return 0;
	}
	i = 0, j = 0;
	while (i<s3.length()) {
		if (s3[i]==s4[j]) i++, j++;
		else i++;
		if (j==s4.length()) {
			cout << "both";
			return 0;
		}
	}
	cout << "need tree";

	return 0;
}