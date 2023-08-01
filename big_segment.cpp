#include <iostream>
#include <vector>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector <pair<int,int>> vec;
	rep (i,0,n) {
		int x, y;
		cin >> x >> y;
		vec.push_back(make_pair(x,y));
	}
	int min {vec[0].first};
	rep (i,0,n) {
		if (vec[i].first<min)
			min = vec[i].first;
	}
	int max {vec[0].second};
	rep (i,0,n) {
		if (vec[i].second>max)
			max = vec[i].second;
	}
	bool value = true;
	rep (i,0,n) {
		if (vec[i].first==min && vec[i].second==max) {
			cout << i+1;
			value = false;
			break;
		}
	}
	if (value)
		cout << -1;

	return 0;
}