#include <iostream>
using namespace std;
int main () {
	
	int x, y;
	cin >> x >> y;
	int arr [x][x];
	for (int i {}; i<x; ++i) {
		for (int j {}; j<x; ++j) {
			if (i==j)
				arr[i][j]=y;
			else
				arr[i][j]=0;
		} 
	}
	for (int i {}; i<x; ++i) {
		for (int j {}; j<x; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}