#include <iostream>
using namespace std;
int main () {
	
	int x;
	cin >> x;
	char arr [x] [x];
	for (int i {}; i<x; ++i) {
		for (int j {}; j<x; ++j) {
			cin >> arr[i][j];
		}
	}
	int cnt {};
	bool value {true};
	for (int i {}; i<x; ++i) {
		for (int j {}; j<x; ++j) {
			if (j+1<x) {if (arr[i][j+1]=='o') ++cnt;}
			if (j-1>=0) {if (arr[i][j-1]=='o') ++cnt;}
			if (i-1>=0) {if (arr[i-1][j]=='o') ++cnt;}
			if (i+1<x) {if (arr[i+1][j]=='o') ++cnt;}

			if (cnt%2!=0) {
				value = false;
				break;
			}
		}
	}
	if (value)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}