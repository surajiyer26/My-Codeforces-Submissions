#include <iostream>
using namespace std;
int main () {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x; 
	cin >> x;
	int arr [7];
	for (int i {}; i<7; ++i)
		cin >> arr [i];
	int ansi;
	while (x>0) {
		for (int i {}; i<7; ++i) {
			if (x>arr[i])
				x-=arr[i];
			else {
				x-=arr[i];
				ansi = i;
				break;
			}
		}
	}
	cout << ansi+1;

	return 0;
}