#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s1;
	getline (cin, s1);

	string s2;
	getline (cin, s2);
	bool value = true;
	rep (i,0,s2.size()) {
		if (s2.at(i)==' ') continue;
		auto it = find (s1.begin(), s1.end(), s2.at(i));
		if (it!=s1.end()) 
			s1.erase(it);
		else {
			value = false;
			break;
		}
	}

	if (value)
		cout << "YES";
	else
		cout << "NO";


	return 0;
}