#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, h, m;
		cin >> n >> h >> m;
		int tot {h*60+m};
		int ans = tot;
		vector <int> vec;
		for (int i {}; i<n; ++i) {
			int x, y;
			cin >> x >> y;
			vec.push_back(60*x+y);
		}
		if (find(vec.begin(),vec.end(),tot)!=vec.end()) {
			cout << 0 << " " << 0 << "\n";
			continue;
		}
		++tot;
		while (find(vec.begin(),vec.end(),tot)==vec.end()) {
			++tot;
			if (tot==1600)
				tot=0;
		}
		if (ans>tot) {
			ans=1440+tot-ans;
		}
		else {
			ans=tot-ans;
		}
		cout << ans/60 << " " << ans%60 << "\n";
	}

	return 0;
}