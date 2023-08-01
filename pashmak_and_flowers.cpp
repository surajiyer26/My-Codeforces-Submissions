#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n;
	cin >> n;
	int arr [n];
	for (int i {}; i<n; ++i) 
		cin >> arr [i];
	sort (arr,arr+n);
	int max = arr[n-1] - arr[0];
	long long countmin {}, countmax {};
	for (int i {}; i<n; ++i) {
		if (arr[i]==arr[0])
			++countmin;
		if (arr[i]==arr[n-1])
			++countmax;
	}
	cout << max << " ";
	if (arr[0]==arr[n-1])
		cout << n*(n-1)/2;
	else
		cout << countmax * countmin;

	return 0;
}