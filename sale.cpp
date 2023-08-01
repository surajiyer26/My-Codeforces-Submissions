#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x, y;
	cin >> x >> y;
	int arr [x], j = 0;
	for (int i {}; i<x; ++i) {
		int z;
		cin >> z;
		if (z<0) {
			arr [j] = z;
			++j;
		}
	} 
	sort (arr,arr+j+1);
	int count {};
	for (int i {}; i<j; ++i) {
		if (y==0) break;
		count += abs(arr[i]);
		--y;
	}
	cout << count;

	return 0;
}