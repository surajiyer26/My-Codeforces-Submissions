#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int arr [n];
	int sum = 0;
	for (int i {}; i<n; ++i) {
		cin >> arr [i];
		sum += arr [i];
	}
	double ans = sum*1.00/((n*100)*1.00);
	cout << ans*100;

	return 0;
}