#include <iostream>
using namespace std;
int main () {
	
	int n;
	cin >> n;
	int arr [n];
	for (int i {}; i<n; ++i) {
		cin >> arr[i];
	}
	bool value {true};
	for (int i {}; i<n; ++i) {
		int cnt {};
		for (int j {}; j<n; ++j) {
			if (arr[i]==arr[j])
				++cnt;
		}
		int max = n/2 + n%2;
		if (cnt>max)
			value = false;
	}

	if (value)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}