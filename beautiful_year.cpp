#include <iostream>
using namespace std;

bool is_distinct (int x) {
	string s {};
	while (x) {
		for (int i {}; i<s.length(); ++i) {
			if (x%10==s.at(i))
				return false;
		}
		s.push_back(x%10);
		x/=10;
	}
	return true;
}

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	cin >> x;
	++x;
	while (!is_distinct(x)) {
		++x;
	}
	cout << x;

	return 0;
}