#include <iostream>
#include <algorithm>
using namespace std;

#define rep(a,b,c) for(int a {b}; a<c; ++a)

int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr [5][5];
	rep (i, 0, 5) {
		rep (j, 0, 5) {
			cin >> arr [i][j];
		}
	}
	int arr2 [5] {0,1,2,3,4};
	int temp {}, max {};
	do {
		temp += 2*(arr[arr2[4]][arr2[3]]+arr[arr2[3]][arr2[4]]);
		temp += 2*(arr[arr2[2]][arr2[3]]+arr[arr2[3]][arr2[2]]);
		temp += (arr[arr2[2]][arr2[1]]+arr[arr2[1]][arr2[2]]);
		temp += (arr[arr2[0]][arr2[1]]+arr[arr2[1]][arr2[0]]);
		if (temp > max) {
			max = temp;
		}
		temp = 0;
	}
	while (next_permutation(arr2, arr2+5));
	cout << max;

	return 0;
}