#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	n-=1;
	int x;
	cin >> x;
	int max = x;
	int min = x;
	int count = 0;
	while (n--) {
		int y;
		cin >> y;
		if (y>max) {
			max = y;
			++count;
		}
		if (y<min) {
			min = y;
			++count;
		}
	}
	cout << count;

	return 0;
}