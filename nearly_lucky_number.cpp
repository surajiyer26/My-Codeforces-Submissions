#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long x, lucky {};
	cin >> x;
	while (x) {
		if (x%10==4 || x%10==7)
			++lucky;
		x/=10;
	}
	if (lucky==4 || lucky==7)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}