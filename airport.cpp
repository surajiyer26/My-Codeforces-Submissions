#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	int arr1 [m];
	int arr2 [m];
	for (int i {}; i<m; ++i) {
		cin >> arr1 [i];
		arr2 [i] = arr1 [i];
	}
	sort (arr1,arr1+m);
	sort (arr2,arr2+m);
	int min {}, countmin {n};
	for (int i {}; i<m;) {
		if (countmin==0) break;
		if (arr1[i]==0) ++i;
		else {
			min += arr1[i];
			arr1[i] = arr1[i] - 1;
			countmin--;
		}
	}
	int max {}, countmax {n};
	for (int i {m-1}; i>=0;) {
		if (countmax==0) break;
		if (arr2[i]<arr2[i-1] && i!=0) sort (arr2,arr2+m); 
		else {
			max += arr2 [i];
			arr2 [i] = arr2 [i] - 1;
			countmax--;
		}
	}
	cout << max << " " << min;

	return 0;
}