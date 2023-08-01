#include <iostream>
using namespace std;

#define long long int int

int main () {

		int n;
		cin >> n;
		string s;
		cin >> s;
		int cnta {}, cntb {};
		for (int i {}; i<n; ++i)
			if (s[i]=='A')
				++cnta;
			else
				++cntb;
		if (cnta>cntb)
			cout << "Anton";
		else if (cnta<cntb)
			cout << "Danik";
		else
			cout << "Friendship";

	return 0;
}