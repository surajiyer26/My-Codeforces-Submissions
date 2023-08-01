#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	char plus;
	vector <int> v;
	while (cin >> x) {
		v.push_back(x);
		char plus;
		cin >> plus;
	}
	sort (v.begin(), v.end());
	for (int i {}; i<v.size(); ++i) {
		cout << v[i];
		if (i+1<v.size())
			cout << '+';
	}


	return 0;
}