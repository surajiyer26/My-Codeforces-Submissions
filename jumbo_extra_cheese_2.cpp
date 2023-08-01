#include <iostream>
#include <vector>
#include <utility>
#include <cmath>
#include <algorithm>
#define pb push_back
#define mp make_pair
#define int int_fast64_t
using namespace std;

signed main () {

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector <pair<int,int>> vec1;
		for (int i {}; i<n; ++i) {
			int x, y;
			cin >> x >> y;
			if (x>y)
				vec1.push_back(make_pair(x,y));
			else
				vec1.push_back(make_pair(y,x));
		}
		sort (vec1.begin(),vec1.end());
		vector <pair<int,int>> vec2;
		for (int i {}; i<n; i+=2) 
			vec2.push_back(vec1[i]);
		if (n%2==0) {
			for (int i {n-1}; i>-1; i-=2)
				vec2.push_back(vec1[i]);
		}
		else {
			for (int i {n-2}; i>-1; i-=2)
				vec2.push_back(vec1[i]);
		}
		int ans = vec2[0].first + vec2[n-1].first;
		for (int i {}; i<n; ++i)
			ans += 2*vec2[i].second;
		for (int i {}; i<n-1; ++i) {
			ans += abs(vec2[i].first-vec2[i+1].first);
		}
		cout << ans << "\n";
	}

	return 0;
}