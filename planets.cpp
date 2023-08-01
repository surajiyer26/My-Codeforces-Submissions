#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		map <int,int> m;
		int arr [n];
		set <int> s;
		vector <int> vec;
		for (int i {}; i<n; ++i) {
			cin >> arr[i];
			if(s.count(arr[i])==0) {
				vec.push_back(arr[i]);
				s.insert(arr[i]);
			}
			m[arr[i]]++;
		}
		int size = vec.size();
		int ans {};
		for (int i {}; i<size; ++i) {
			ans += (m[vec[i]]>x)?x:m[vec[i]];
		}
		cout << ans << "\n";
	}

	return 0;
}