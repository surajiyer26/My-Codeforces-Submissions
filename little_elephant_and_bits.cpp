#include <iostream>
#include <string>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	bool zero = false;
	string s;
	cin >> s;
	int index;
	int n = s.length();
	rep (i,0,n) {
		if (s[i]=='0') {
			zero = true;
			index = i;
			break;
		}
	}
	if (zero) {
		rep (i,0,n) {
			if (i==index)
				continue;
			else
				cout << s[i];
		}
	}
	else {
		rep (i,1,n)
			cout << 1;
	}

	return 0;
}