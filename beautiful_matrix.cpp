#include <iostream>
#include <cmath>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr [5] [5];
	for (int i {}; i<5; ++i) {
		for (int j {}; j<5; ++j) {
			cin >> arr [i] [j];
			if (arr [i] [j] == 1) {
				cout << abs(2-i) + abs(2-j);
				return 0;
			}
		}
	}

	return 0;
}