#include <iostream>
using namespace std;

int without_zero (int x) {
	int y {}, i {1};
	while (x) {
		if (x%10!=0) {
			y+=i*(x%10);
			i*=10;
		}
		x/=10;
	}
	return y;
}

int main () {
	
	int a, b, c;
	cin >> a >> b;
	c = a + b;
	a = without_zero(a);
	b = without_zero(b);
	c = without_zero(c);
	if (c==a+b) {
		cout << "YES";
	} 
	else
		cout << "NO";

	return 0;
}