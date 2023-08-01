#include <iostream>
#include <vector>
using namespace std;
int main () {
	
	int n, k, maxjoy{-999999999};
	cin >> n >> k;
	vector <pair<int,int>> vec;
	for (int i {}; i<n; ++i) {
		int x, y;
		cin >> x >> y;
		vec.push_back(make_pair(x,y));
		if (vec[i].second>k) {
			if (maxjoy<(vec[i].first - (vec[i].second - k)))
			maxjoy = vec[i].first - (vec[i].second - k);
		}
		else {
			if (maxjoy<vec[i].first)
				maxjoy = vec[i].first;
		}
	}
	cout << maxjoy;

	return 0;
}