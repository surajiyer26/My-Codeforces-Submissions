#include <iostream>
#include <cmath>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long int t, sx, sy, ex, ey;
	cin >> t >> sx >> sy >> ex >> ey;
	string s;
	cin >> s;
	int count {};
	int min {};
	bool value = false;
	for (int i {}; i<s.length(); ++i) {

		if (s[i]=='E') {
			if (abs(sx+1-ex)<abs(sx-ex))
				sx++;
			count++;
		}
		else if (s[i]=='S') {
			if (abs(sy-1-ey)<abs(sy-ey))
				sy--;
			count++;
		}
		else if (s[i]=='W') {
			if (abs(sx-1-ex)<abs(sx-ex))
				sx--;
			count++;
		}
		else {
			if (abs(sy+1-ey)<abs(sy-ey))
				sy++;
			count++;
		}
		if (sx==ex && sy==ey) {
			value = true;
			break;
		}
	}
	if (value)
		cout << count;
	else
		cout << -1;

	return 0;
}