#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector <char> vec1, vec2;
	rep (i,0,n) {
		char x;
		cin >> x;
		vec1.push_back(x);
	}
	rep (i,0,n) {
		char x;
		cin >> x;
		vec2.push_back(x);
	}
	sort (vec1.begin(), vec1.end());
	sort (vec2.begin(), vec2.end());
	bool value = true;
	if (vec1[0]>vec2[0]) {
		rep (i,0,n) {
			if (vec1[i]<=vec2[i]) {
				value = false;
				break;
			}
		}
	}
	else {
		rep (i,0,n) {
			if (vec1[i]>=vec2[i]) {
				value = false;
				break;
			}
		}
	}
	if (value)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}