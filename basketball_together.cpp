#include <iostream>
#include <algorithm>
using namespace std;

int main () {

	int n, d;
	cin >> n >> d;
	int arr [n];
	for (int i {}; i<n; ++i) 
		cin >> arr[i];
	sort (arr,arr+n);
	int start {};
	int ans {};
	for (int i {n-1}; i>-1; --i) {
		if (start>i)
			break;
		if ((d+arr[i])/arr[i]<=i-start+1) {
			++ans;
			start+=(d+arr[i])/arr[i]-1;
		}
		else
			break;
	}	
	cout << ans;

	return 0;
}