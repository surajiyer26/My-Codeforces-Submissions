#include <iostream>
#include <cmath>
using namespace std;

bool solve (long y) {
	if (y<0) y*=-1;
	while (y) {
		if (y%10==8) return true;
		else y=y/10;
	}
		return false;
}

int main () {
	long x;
	cin >> x;
	int num {};
	while (x <= 8888888888) {
		if (solve(x) && num!=0) 
			break;
        x = x + 1;
        num++;
    }
    cout << num;

	return 0;
}