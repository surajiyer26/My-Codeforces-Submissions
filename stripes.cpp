#include <iostream>
using namespace std;

int main () {

	int t;
	cin >> t;
	while (t--) {
		char arr [8][8];
		for (int i {}; i<8; ++i) {
			for (int j {}; j<8; ++j) {
				cin >> arr [i][j];
			}
		}
		bool red {false};
		for (int i {}; i<8; ++i) {
			if (arr[i][0]=='R'&&arr[i][1]=='R'&&arr[i][2]=='R'&&arr[i][3]=='R'&&arr[i][4]=='R'&&arr[i][5]=='R'&&arr[i][6]=='R'&&arr[i][7]=='R') {
				red = true;
				break;
			}
		}
		if (red)
			cout << "R\n";
		else
			cout << "B\n";
	}

	return 0;
}