#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int temp = n;
	int sum1 = 0, sum2 = 0;
	while (temp--) { 
		int x, y;
		cin >> x >> y;
		sum1 += x;
		sum2 += y;
	}
	int ans = 0;
	if (2*sum1>n) ans += n-sum1;
	else ans += sum1;
	if (2*sum2>n) ans += n-sum2;
	else ans += sum2;
	cout << ans;

	return 0;
}