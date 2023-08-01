#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	map <int, vector <int>> mp;
	rep (i,0,n) {
		int x;
		cin >> x;
		mp[x].push_back(i);
	}
	set <pair <int,int>> ans;
	for (auto i: mp) {
		if (i.second.size()==1) {
			ans.insert(make_pair(i.first, 0));
		}
		else if (i.second.size()==2) {
			ans.insert(make_pair(i.first, i.second[1]-i.second[0]));
		}
		else {
			int cd = i.second[1]-i.second[0];
			bool flag = true;
			rep (j,2,i.second.size()) {
				if (i.second[j]-i.second[j-1]!=cd) {
					flag = false;
					break;
				}
			}
			if (flag) {
				ans.insert(make_pair(i.first, cd));
			}
		}
	}
	cout << ans.size() << endl;
	for (auto c: ans) 
		cout << c.first << " " << c.second << endl;

	return 0;
}