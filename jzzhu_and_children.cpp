#include <iostream>
#include <cmath>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	double x, y;
	cin >> x >> y;
	double max {}, maxi {};
	for (double i {1}; i<=x; ++i) {
		double t;
		cin >> t;
		if (ceil(t/y) >= max) {
			max = ceil(t/y);
			maxi = i;
		}
	}
	cout << maxi;
	

	return 0;
}