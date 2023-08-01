#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	cin >> x;
	int arr [x];
	for (int i {1}; i<=x; ++i) {
		arr [i-1] = i;
	}
	for (int i {x-1}; i>0; --i) {
		int temp = arr [i];
		arr [i] = arr [i-1];
		arr [i-1] = temp;
	}
	for (int i {}; i<x; ++i)
		cout << arr [i] << " ";

	return 0;
}