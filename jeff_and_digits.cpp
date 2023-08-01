#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int arr [n];
	int no0 {}, no5 {};
	for (int i {}; i<n; ++i) {
		cin >> arr[i];
		if (arr[i]==0)
			++no0;
		if (arr[i]==5)
			++no5;
	}
	if (no0==0)
		cout << -1;
	else if (no5<9)
		cout << 0;
	else {
		for (int i {}; i<no5/9; ++i) {
			cout << 555555555;
		}
		for (int i {}; i<no0; ++i) {
			cout << 0;
		}
	}

	return 0;
}