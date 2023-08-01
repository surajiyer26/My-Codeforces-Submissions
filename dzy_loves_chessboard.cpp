#include <iostream>
using namespace std;
int main () {
	
	int x, y;
	cin >> x >> y;
	char arr1 [x][y];
	for (int i {}; i<x; ++i) {
		for (int j {}; j<y; ++j) {
			cin >> arr1[i][j];
			if (arr1[i][j]=='.') {
				if ((i+j)%2==0) arr1[i][j]='B';
				else arr1[i][j]='W';
			}
		}
	}
	for (int i {}; i<x; ++i) {
		for (int j {}; j<y; ++j) {
			cout << arr1[i][j];
		}
		cout << endl;
	}
 
	return 0;
}