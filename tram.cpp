#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int sum = 0, max = 0;
	int t;
	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;
		sum-=x;
		sum+=y;
		if (sum>max)
			max = sum;
	}
	cout << max;

	return 0;
}