#include <iostream>
using namespace std;

int main () {

	int a, b;
	cin >> a >> b;
	int i {};
	for (;;++i) {
		if (a>b) break;
		a *= 3;
		b *= 2;
	}
	cout << i;

	return 0;
}