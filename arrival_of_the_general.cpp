#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	int arr [n];
	for (int i {}; i<n; ++i) 
		cin >> arr [i];
	int max = arr [0], min = arr [n-1];
	int maxi = 0, mini = n-1;
	for (int i {}; i<n; ++i) {
		if (arr[i]>max) {
			max = arr[i];
			maxi = i;
		}
	}
	for (int i {n-1}; i>=0; --i) {
		if (arr[i]<min) {
			min = arr[i];
			mini = i;
		}
	}
	if (maxi<mini)
		cout << (maxi - 1) + (n - mini);
	else
		cout << (maxi - 1) + (n - mini) - 1;


	return 0;
}