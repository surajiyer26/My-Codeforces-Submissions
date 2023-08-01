#include <iostream>
#include <vector>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		vector <int> vec;
		for (int i {}; i<n; ++i) {
			if (s[i]=='Q')
				vec.push_back(1);
			else {
				if (vec.size()!=0)
				vec.pop_back();
			}
		}
		if (vec.size())
			cout << "No\n";
		else
			cout << "Yes\n";
	}

	return 0;
}