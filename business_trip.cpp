#include <iostream>
#include <algorithm>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	cin >> x;
	int arr [12];
	for (int i {}; i<12; ++i) 
		cin >> arr [i];
	sort (arr,arr+12,greater<int>());
	int sum {}, count {};
	for (int i {}; i<12; ++i) {
		if (sum>=x)
			break;
		else {
			sum+=arr[i];
			count++;
		}
	}
	if (sum>=x)
		cout << count;
	else
		cout << -1;

	return 0;
}