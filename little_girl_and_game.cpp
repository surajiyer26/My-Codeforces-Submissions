#include <iostream>
#include <string>
#include <map>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;
	int n = s.length();

	map <char, int> m;

	for (int i {}; i<n; ++i) {
		if (m.count(s.at(i))==0)
			m.insert(make_pair(s.at(i),0));
		else
			m[s.at(i)]++;
	}

	int even {}, odd {};

	for (auto c: m)
		if ((c.second)%2==0)
			++even;
		else
			++odd;

	int count {};
	
	if (even>1) {
		if (even%2==0) cout << "Second";
		else cout << "First";
	}
	else cout << "First";

	return 0;
}