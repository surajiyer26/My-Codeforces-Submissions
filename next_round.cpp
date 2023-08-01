#include <iostream>
using namespace std;

int main () {

	int n, k;
	cin >> n >> k;
	int arr [n];
	for (int i {}; i<n; ++i)
		cin >> arr [i];
	int temp = arr[k-1];
	int ans {};
	for (int i {}; i<n; ++i) {
		if (arr[i]<temp || arr[i]<=0)
			break;
		else
			++ans;
	}
	cout << ans;

	return 0;
}