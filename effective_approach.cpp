#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int arr [100001];
	for (int i {1}; i<=n; ++i) {
		int y;
		cin >> y;
		arr[y]=i;
	}
	int n1;
	cin >> n1;
	long long x, count1 = 0, count2 = 0;
	while (n1--) {
		cin >> x;
		count1 += arr[x];
		count2 += n + 1 - arr[x];
		}
	cout << count1 << " " << count2;

	return 0;
}