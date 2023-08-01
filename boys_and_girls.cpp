#include <iostream>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	int x, y;
	cin >> x >> y;
	int common;
	if (x>y) {
		common = y; 	
		x-=common;
		y=0;
		rep (i,0,common) cout << "BG";
		rep (i,0,x) cout << "B";
	}
	else if (y>x) {
		common = x;
		y-=common;
		x=0;
		rep (i,0,common) cout << "GB";
		rep (i,0,y) cout << "G";
	}
	else {
		common = y;
		x=0;
		y=0;
		rep (i,0,common) cout << "GB";
	}

	return 0;
}