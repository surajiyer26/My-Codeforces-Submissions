#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		int x = abs(a-1);
		int y = abs(c-b)+abs(c-1);
		if (x<y)
			cout << 1 << "\n";
		else if (x>y)
			cout << 2 << "\n";
		else
			cout << 3 << "\n";
	}

	return 0;
}