#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	
	int n;
	cin >> n;
	vector <pair<int,int>> vec;
	for (int i {}; i<n; ++i) {
		int a, b;
		cin >> a >> b;
		vec.push_back(make_pair(a,b));
	}
	sort (vec.begin(), vec.end());
	bool val {true};
	for (int i {}; i<n-1; ++i) {
		if (vec[i].second>vec[i+1].second)
			val = false;
	}
	if (val)
		cout << "Poor Alex";
	else
		cout << "Happy Alex";

	return 0;
}