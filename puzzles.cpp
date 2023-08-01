#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	
	int x, y;
	cin >> x >> y;
	int arr [y];
	for (int i {}; i<y; ++i) {
		cin >> arr [i];
	}
	sort (arr, arr+y);
	int min {arr [x-1] - arr [0]};
	for (int i {}; i<=y-x; ++i) {
		if (min>(arr [i+x-1] - arr [i]))
		min = (arr [i+x-1] - arr [i]);
	}
	cout << min;

	return 0;
}