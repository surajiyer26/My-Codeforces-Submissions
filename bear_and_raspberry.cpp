#include <iostream>
using namespace std;
int main () {
	
	int n, c;
	cin >> n >> c;
	int arr [n];
	int max {};
	for (int i {}; i<n; ++i) {
		cin >> arr [i];
		if (i!=0) {
			if (max<arr[i-1]-arr[i]) 
				max = arr[i-1]-arr[i];
		}
	}
	if (max - c>0)
	cout << max - c;
	else
	cout << 0;


	return 0;
}